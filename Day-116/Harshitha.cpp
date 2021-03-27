vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
   
   vector<int>ans ;
   int count = 0;
   for(int i = 0 ; i < queries.size() ; ++i)
   {
       count = 0;
       for(int j = 0 ; j < strings.size() ; ++j)
       {
           if(queries[i] == strings[j])
           {
               count++;
               
           }
       }
       ans.push_back(count);
   }
   return ans;
}
