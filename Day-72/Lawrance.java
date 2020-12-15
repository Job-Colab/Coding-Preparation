import java.util.*;

class Solution {
    public int solve(String s) {
        int number = 0;
        double pow = 0.0;
        for(int i = s.length() - 1; i >= 0; i--) {
            number += Integer.parseInt(String.valueOf(s.charAt(i))) * (int) Math.pow(3.0, pow);
            pow += 1.0;
        }
        return number;
    }
}
