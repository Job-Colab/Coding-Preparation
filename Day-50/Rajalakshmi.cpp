class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> s;
        int i,sum=0;
        for(string op:ops)
        {
            sum=0;
            if(op=="+")
            {
                int l=s.top();
                sum+=l;
                s.pop();
                sum+=s.top();
                s.push(l);
                s.push(sum);
            }
            else if(op=="C")
                s.pop();
            else if(op=="D")
                s.push(s.top()*2);
            else{
            int num = stoi(op);
            s.push(num);}
        }
        sum=0;
        while(!s.empty())
        {
            sum+=s.top();
            s.pop();
        }
        return sum;
    }
};