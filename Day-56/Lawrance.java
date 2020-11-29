class Solution {
    public String toGoatLatin(String S) {
        String[] arr = S.split(" ");
        String temp = "a";
        for(int i = 0; i < arr.length; i++) {
            if(arr[i].startsWith("a") || 
               arr[i].startsWith("e") || 
               arr[i].startsWith("i") || 
               arr[i].startsWith("o") || 
               arr[i].startsWith("u") ||
               arr[i].startsWith("A") || 
               arr[i].startsWith("E") || 
               arr[i].startsWith("I") || 
               arr[i].startsWith("O") || 
               arr[i].startsWith("U")) {
               arr[i] = arr[i] + "ma";
            }
            else {
                arr[i] = arr[i].substring(1, arr[i].length()) + arr[i].charAt(0) + "ma";
            }
            arr[i] = arr[i] + temp;
            temp += "a";
        }
        return String.join(" ", arr);
    }
}
