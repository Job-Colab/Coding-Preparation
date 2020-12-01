class Solution {
public:
    int calPoints(vector<string>& o) {
        stack<int> stk;
        int i=0, a, b, c;
        for(string s : o){
            if(s=="+"){
                a=stk.top();
                stk.pop();
                b=stk.top();
                stk.pop();
                c=a+b;
                stk.push(b);
                stk.push(a);
                stk.push(c);
            }
            else if(s=="C")
                stk.pop();
            else if(s=="D"){
                a=stk.top();
                stk.push(a*2);
            }
            else
                stk.push(stoi(s));
        }
        a=0;
        while(!stk.empty()){
            a+=stk.top();
            stk.pop();
        }
        return a;
    }
};