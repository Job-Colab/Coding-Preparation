#include <iostream>
using namespace std;

int nums[10000],n,output=0;

void getNums(){
	for(int i=0;i<n;i++)
		cin>>nums[i];
}

void getOutput(){
	
	for(int i=0;i<n;i++){
            output ^= nums[i];
        }
}

int main() {
    
    cout<<"Enter the number of elements : ";
    cin>>n;
    
    cout<<"Enter the numbers :"<<endl;
    getNums();
    
    getOutput();
    
    cout<<"Output : "<<output;
    
    return 0;
}

