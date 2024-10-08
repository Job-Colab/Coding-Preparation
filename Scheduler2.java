import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.CompletableFuture;

public class Scheduler2 {
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
        Scheduler2 sch = new Scheduler2();

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

        Node node1 = sch.add(new task1(jsonObject, "n1", 3));

        ZATask[] tasks = new ZATask[1];
        for (int i = 0; i < tasks.length; i++) {
            String s = "arraytask " + i;
            int wait = i;
            tasks[i] = new task1(jsonObject, s, wait);
        }
        Node[] nodes = new Node[1];
        for (int i = 0; i < tasks.length; i++) {
            nodes[i] = sch.add(tasks[i], node1);
        }

        ZATask[] tasks1 = new ZATask[7];
        for (int i = 0; i < tasks1.length; i++) {
            String s = "arraytask new " + i;
            int wait = i + 1;
            tasks1[i] = new task1(jsonObject, s, wait);
        }
        Node[] nodes1 = new Node[7];
        for (int i = 0; i < tasks1.length; i++) {
            nodes1[i] = sch.add(tasks1[i], nodes);
        }

        Node node2 = sch.add(new task1(jsonObject, "n2", 5), nodes1);
        Node node3 = sch.add(new task3(jsonObject), node1, node2);
        Node node4 = sch.add(new taskx(jsonObject, "concat task"), node3);
        Node node5 = sch.add(new task3(jsonObject), node4);
        System.out.println(sch);
        sch.execute();

        Thread.sleep(500000);
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
        String s = "Scheduler2 " + this.hashCode() + "\n";
        for (int i = 0; i < initTasks.size(); i++) s += "initTask " + i + " " + initTasks.get(i).toString() + "\n";
        for (int i = 0; i < dependantTasks.size(); i++)
            s += "dependantTask " + i + " " + dependantTasks.get(i).toString() + '\n';
        return s;
    }

}
