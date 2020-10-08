#include <iostream>
using namespace std;

int A[100000],index[2],inputs,target,output;

void getNum(){
	for(int i=0;i<inputs;i++)
		cin>>A[i];
}

int getIndex(){
	
	int j=0,l=0;
	
	for(j;j<inputs;j++){
		
		l++;
		for(int k=l;k<inputs;k++){
			
			if(A[j]+A[k] == target){
				index[0] = j;
				index[1] = k;
				return 1;
			}
		}
	}
	
	return 0;
}

int main() {
    
    cout<<"Enter the number of inputs : ";
    cin>>inputs;
    
    cout<<"Enter the numbers :"<<endl;
    getNum();
    
    cout<<"Enter the target number : ";
    cin>>target;
    
    output = getIndex();
    
    if(output == 1)
    	cout<<"Index for the target number : "<<"["<<index[0]<<","<<index[1]<<"]";
	else 
		cout<<"Index for the target number is not present !";
    
    return 0;
}

