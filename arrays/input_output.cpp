#include <iostream>
using namespace std;

int main(){
	
	int arr[10];
	cout<<"enter the num of element want to store in arr"<<endl;
		int n;
	cin>>n;
	//input kaise lete h.........
	for(int i=0; i<n;i++){
		cout<<"enter the element"<<i<<endl;
		cin>>arr[i];
	}
	
	//to print output
	for (int i=0;i<n;i++){
		// cout<<"the element in the index"<<i;
		cout<<arr[i]<<",";
		cout<<endl;
	}

	
	
	
	return 0;
}