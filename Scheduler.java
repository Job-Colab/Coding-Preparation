import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.CompletableFuture;

public class Scheduler {
    class Node {
        ZATask task;
        ArrayList<Node> parentList;
        ArrayList<Node> childList;
        CompletableFuture<Void> end;

        Node(ZATask task) {
            this.task = task;
            childList = new ArrayList<>();
            parentList = new ArrayList<>();
        }

        public CompletableFuture<Void> getEnd() {
            return end;
        }

        void addParent(Node node) {
            parentList.add(node);
        }

        void addNext(Node node) {
            childList.add(node);
        }

        void execute() {
            if (parentList.size() != 0) {
                for (Node node : parentList) {
                    if (node.getEnd().isDone() == false)
                        return;
                }
            }
            end = ZATaskUtil.completeTask(task);
            end.thenRunAsync(() -> {
                for (Node node : childList) {
                    node.execute();
                }
            }, ZATaskUtil.getService());
        }

        public String toString() {
            String s = "";
            s += "Node " + this.getId() + " ";
            s += " Parents count : " + parentList.size() + " Parents : ";
            for (Node parent :
                    parentList) {
                s += (parent.getId() + " ");
            }
            s += "; ";
            s += " Children count " + childList.size() + " Children : ";
            for (Node child :
                    childList) {
                s += (child.getId() + " ");
            }
            s += "; ";
            return s;
        }

        public Integer getId() {
            return Integer.valueOf(this.hashCode()).toString()
                    .chars()
                    .map(Character::getNumericValue)
                    .sum();
        }

    }

    ArrayList<Node> initTasks = new ArrayList<>();
    ArrayList<Node> dependantTasks = new ArrayList<>();

    Node add(ZATask task) {
        Node node = new Node(task);
        initTasks.add(node);
        return node;
    }

    Node add(ZATask task, Node... parentNodes) {
        Node node = new Node(task);
        for (Node curnode : parentNodes) {
            curnode.addNext(node);
            node.addParent(curnode);
        }
        dependantTasks.add(node);
        return node;
    }

    void execute() {
        for (Node node : initTasks) {
            node.execute();
        }
    }

    boolean isDone() {
        boolean b = true;

        for (Node node : initTasks) {
            if (node.getEnd().isDone() == false) {
                b = false;
                break;
            }
        }

        for (Node node : dependantTasks) {
            if (node.getEnd().isDone() == false) {
                b = false;
                break;
            }
        }


        return b;
    }

    public static void main(String[] args) throws InterruptedException {
        Map<String, String> jsonObject = Collections.synchronizedMap(new HashMap<String, String>());

        class task1 implements ZATask {
            Map<String, String> jsonObject;
            String s;
            int wait;

            task1(Map<String, String> jsonObject, String s, int wait) {
                this.jsonObject = jsonObject;
                this.s = s;
                this.wait = wait;
            }

            @Override
            public void processTask() {
                System.out.println("task " + s + " executing");
                jsonObject.put(s, api(wait));
            }
        }


        class task3 implements ZATask {
            Map<String, String> jsonObject;

            task3(Map<String, String> jsonObject) {
                this.jsonObject = jsonObject;
            }

            @Override
            public void processTask() {
                System.out.println("task 3 executing");
                System.out.println(jsonObject);
            }
        }

        class taskx implements ZATask {
            Map<String, String> jsonObject;
            String s;

            taskx(Map<String, String> jsonObject, String s) {
                this.jsonObject = jsonObject;
                this.s = s;
            }

            @Override
            public void processTask() {
                System.out.println("task " + s + " executing");
                for (String key : jsonObject.keySet()) {
                    jsonObject.put(key, jsonObject.get(key) + jsonObject.get(key));
                }
            }
        }

        Scheduler sch = new Scheduler();

        Node node1 = sch.add(new task1(jsonObject, "n1", 3));


        Node node2 = sch.add(new task1(jsonObject, "n2", 5), node1);
        Node node2x = sch.add(new task1(jsonObject, "2x", 5), node1);
        Node node21x = sch.add(new task1(jsonObject, "21x", 6), node1);
        Node node22x = sch.add(new task1(jsonObject, "22x", 7), node1);
        Node node23x = sch.add(new task1(jsonObject, "23x", 9), node1);
        Node node24x = sch.add(new task1(jsonObject, "24x", 10), node1);
        Node node25x = sch.add(new task1(jsonObject, "25x", 4), node1);
        Node node3x = sch.add(new task1(jsonObject, "3x", 5), node2x, node21x, node22x, node23x, node24x, node25x);
        Node node31x = sch.add(new task1(jsonObject, "31x", 6), node2x, node21x, node22x, node23x, node24x, node25x);
        Node node32x = sch.add(new task1(jsonObject, "32x", 7), node2x, node21x, node22x, node23x, node24x, node25x);
        Node node33x = sch.add(new task1(jsonObject, "33x", 9), node2x, node21x, node22x, node23x, node24x, node25x);
        Node node34x = sch.add(new task1(jsonObject, "34x", 10), node2x, node21x, node22x, node23x, node24x, node25x);
        Node node35x = sch.add(new task1(jsonObject, "35x", 4), node2x, node21x, node22x, node23x, node24x, node25x);
        Node node3 = sch.add(new task3(jsonObject), node1, node2);
        Node node4 = sch.add(new taskx(jsonObject, "concat task"), node3x, node31x, node32x, node33x, node34x, node35x);
        Node node5 = sch.add(new task3(jsonObject), node4);
        System.out.println(sch);
        sch.execute();

        Thread.sleep(200000);
        System.out.println("end" + jsonObject);
        ZATaskUtil.endService();
    }

    static String api(int wait) {
        try {
            System.out.println("waiting for " + wait + " seconds");
            Thread.sleep(wait * 1000);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        return "Value";
    }

    public String toString() {
        String s = "Scheduler " + this.hashCode() + "\n";
        for (int i = 0; i < initTasks.size(); i++) s += "initTask " + i + " " + initTasks.get(i).toString() + "\n";
        for (int i = 0; i < dependantTasks.size(); i++)
            s += "dependantTask " + i + " " + dependantTasks.get(i).toString() + '\n';
        return s;
    }

}
