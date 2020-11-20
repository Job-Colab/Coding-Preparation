class Solution {
    public int numFriendRequests(int[] ages) {
        int[] count=new int[121];
        for (int age: ages) count[age]++;
        int ans = 0;
        for (int A=0;A<=120;A++) {
            int countA = count[A];
            for (int B = 0;B<=120;B++) {
                int countB = count[B];
                if (A * 0.5 + 7 >= B) continue;
                if (A < B) continue;
                if (A < 100 && 100 <B) continue;
                ans += countA * countB;
                if (A == B) 
                    ans-=countA;
            }
        }
        return ans;
    }
}
