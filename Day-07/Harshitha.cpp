class Solution {
public:
    string longestCommonPrefix(vector<string>& words) 
    {
       int no_of_words = words.size();
       string s;
     
     if(no_of_words == 0)
     {
     return "";
     }
        
     sort(words.begin() , words.end());
     int size_word1 = words[0].size();   
     int prefix = 0;
     while(prefix < size_word1 && words[0][prefix] == words[no_of_words - 1][prefix])
      {
         s += words[0][prefix];
         prefix++;
      }
        
     
       
     
        return s;
    }
        
    };
