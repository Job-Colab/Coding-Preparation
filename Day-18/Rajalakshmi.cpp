class Solution {
public:
    int minOperations(vector<string>& logs) {
        int c=0,i,j;
    for(i=0;i<logs.size();i++)
    {
        for(j=0;logs[i][j]!='\0';j++)
            if(logs[i][j]=='/')
                break;
        if(logs[i][j-1]=='.')
        {
            if(logs[i][j-2]=='.'&&c>0)
                c--;
        }
        else
            c++;
    }
        //if(c<0)
          //  return 0;
        return c;
    }
};