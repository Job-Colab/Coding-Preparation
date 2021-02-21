#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t!=-1){
  int time,speed,sum=0,pre;
  for(int i =0;i<t;i++){
    cin>>speed>>time;
    if(i==0){
      sum+=speed*time;
    }
    else{
      pre=time-pre;
      sum+=speed*pre;
    }
    pre=time;
   }
   cout<<sum<<" miles"<<endl;
   cin>>t;
  }
  return 0;
}
