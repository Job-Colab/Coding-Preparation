class Solution {
public:
    bool judgeCircle(string moves) {
        int v = 0;
        int h = 0;
        for (int i=0;i<moves.size();i++) {
            switch (moves[i]) {
                case 'U' : v++; break;
                case 'D' : v--; break;
                case 'R' : h++; break;
                case 'L' : h--; break;
            }
        }
        return v == 0 && h == 0;
    }
};
