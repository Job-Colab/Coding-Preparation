#include <iostream>
using namespace std;

int nums[100000],n,output=-1;

void getNums(){
	for(int i=0;i<n;i++)
		cin>>nums[i];
}

void sortNums(){
	
	int tmp;
	for(int j=0;j<n;j++){
		for(int k=0;k<n-1;k++){
			
			if(nums[k]>nums[k+1]){
				tmp = nums[k];
				nums[k] = nums[k+1];
				nums[k+1] = tmp;
			}
		}
	}
	
	for(int j=0;j<n;j++){
		cout<<nums[j];
		if(j != n-1){
			cout<<",";
		}
	}
	cout<<endl;
}

void getOutput(){
	int beg,mid,last;
	
	beg = 0;
	last = n-1;

	
	while(beg <= last){
		mid = (beg + last)/2;
		
		if(mid == nums[mid]){
			output = mid;
			last = mid-1;
		}
		else if(mid > nums[mid])
			beg = mid+1;
		else
			last = mid-1;
	}
}

int main() {
    
    cout<<"Enter the number of elements : ";
    cin>>n;
    
    cout<<"Enter the numbers :"<<endl;
    getNums();
    
    sortNums();
    
    getOutput();
    
    cout<<"Output : "<<output;
    
    return 0;
}

