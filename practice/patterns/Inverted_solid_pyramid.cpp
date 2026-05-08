#include<iostream>
using namespace std;

class Solution {
public:
	void printInvertedSolidPyramid(int n) {
		// Implement the pattern printing logic here
		//spcae = row-1
		//star = (2*n-(2*row-1))
for (int row =1; row<=n;row++){
  

	for (int col=1; col<=row-1; col++){
		cout<<"  ";
	}
	  
	for (int col=1; col<=(2*n-(2*row-1));col++){
		cout<<"* ";
	}
	cout<<endl;
}

			}
};

int main(){
	Solution obj;
	int n ; 
	cin>>n;
	
	obj.printInvertedSolidPyramid(n);
	
	
	return 0;
}