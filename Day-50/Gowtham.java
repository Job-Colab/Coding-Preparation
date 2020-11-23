class Solution {
    public int calPoints(String[] ops) {
        int[] record;
        int sum = 0,index = 0;
        
        record = new int[ops.length];
        
        for(int i=0;i<ops.length;i++){
            if(!(ops[i].equals("C") || ops[i].equals("D") || ops[i].equals("+"))){
                record[index] = Integer.parseInt(ops[i]);
                index++;
            }
            else if(ops[i].equals("C")){
                record[index-1] = 0;
                index--;
            }
            else if(ops[i].equals("D")){
                record[index] = 2*record[index-1];
                index++;
            }
            else{
                record[index] = record[index-2] + record[index-1];  
                index++;
            }
        }
        
        for(int j=0;j<record.length;j++)
            sum += record[j];
        
        return sum;
    }
}
