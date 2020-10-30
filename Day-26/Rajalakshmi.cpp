class Solution {
    public String defangIPaddr(String address) {
        String answer=address.replace(".","[.]");
        return answer;
    }
}