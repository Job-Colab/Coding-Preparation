#include <iostream>
using namespace std;

int main() {
    
    int Num[100],input,sum=0;
    
    cout<<"Enter number of inputs: ";
    cin>>input;
    cout<<"Enter the numbers : "<<endl;
    
    for(int i=0;i<input;i++){
    	
    	cin>>Num[i];
    	
    	if(Num[i]%2 != 0){
    		sum += Num[i];
		}
    	
	}
	
	cout<<"Sum of odd numbers is : "<<sum;
    
    return 0;
}

