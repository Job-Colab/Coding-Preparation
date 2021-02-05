class Solution {
    
    public String reverse(String S){
        Stack<Character> st = new Stack<>();
        for(char i : S.toCharArray()) {
            st.push(i);
        }
        StringBuilder builder = new StringBuilder();
        while(!st.empty()) {
            builder.append(st.peek());
            st.pop();
        }
        return builder.toString();
    }

}
