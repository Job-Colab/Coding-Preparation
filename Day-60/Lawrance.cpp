import java.util.*;

class Solution {
    boolean isDiv(int n) {
        return (n != 0 && n % 3 == 0);
    }
    public String[] solve(int n) {
        String[] ans = new String[n];
        int num = 1;
        for(int i = 1; i <= n; i++) {
            String val = null;
            if(isDiv(i)) {
                val = "clap";
            }
            else {
                int temp = i;
                while(temp != 0) {
                    if(isDiv(temp % 10)) {
                        val = "clap";
                        break;
                    }
                    temp /= 10;
                }
                if(val == null) {
                    val = String.valueOf(i);
                }
            }
            ans[i - 1] = val;
        }
        return ans;
    }
}
