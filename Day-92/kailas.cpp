int n =s.size();
   int *ar = new int[n];
   for(int i=0;i<n;i++){
       ar[i]=s.top();
       s.pop();
   }
   ::sort(ar,ar+n);
   for(int i =0;i<n;i++){
       s.push(ar[i]);
   }
