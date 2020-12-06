class Solution {
    public List<Boolean> camelMatch(String[] queries, String pattern) {
        String regexpattern = "[a-z]*" + String.join("[a-z]*", pattern.split("")) + "[a-z]*";
        List<Boolean> ans = new ArrayList<>(queries.length);
        for (String q : queries) 
        { ans.add(q.matches(regexpattern)); }
        return ans;
    }
}
