#include<iostream>
using namespace std;
int main(){
int n,temp,sum=0;
cin>>n
for(int i = 0;i<n;i++){
  cin>>temp;
  if(temp%2!=0){
      sum+=temp;
  }
}
cout<<sum;
return 0;
}
