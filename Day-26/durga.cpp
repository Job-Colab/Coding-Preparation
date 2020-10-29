class Solution {
public:
    string defangIPaddr(string address) {
        int n=address.length();
        string str;
        for(int i=0;i<n;i++)
        {
            if(address[i]!='.')
            {
                str.push_back(address[i]);
            }
            else
            {
                str.push_back('[');
                str.push_back(address[i]);
                str.push_back(']');
            }
        }
        return str;
    }
};
