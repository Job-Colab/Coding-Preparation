class Solution {
public:
    int maximum69Number (int num) {
        int var = num;
        int temp = 1;
        // How many digits are there in the num
        while(var != 0) {
            temp *= 10;
            var /= 10;
        }
        temp /= 10;
        if(temp == 1) return 9;
        bool found = false;
        int answer = 0;
        while(temp != 0) {
            int part = (num / temp) % 10;
            if(part == 6 && !found) {
                found = true;
                part = 9;
            }
            answer = (answer * 10) + part;
            temp /= 10;
        }
        return answer;
    }
};


/*
// Slower Version
class Solution {
public:
    int maximum69Number (int num) {
        int answer = 0;
        vector<int> temp;
        while(num != 0) {
            temp.push_back(num % 10);
            num /= 10;
        }
        bool over = true;
        for(auto it = temp.rbegin(); it != temp.rend(); it++) {
           if(*it == 6 && over) {
               over = false;
               answer = (answer * 10) + 9;
           } else {
               answer = (answer * 10) + *it;
           }
           cout << answer << " ";
        }
        return answer;
    }
};
*/
