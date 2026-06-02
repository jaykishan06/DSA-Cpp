#include<iostream>
#include <vector>
using namespace std;



class Solution {
public:
	double findAverage(const vector<int>& arr) {
		// Implement logic to find the average
		double ans=0;
		int totalSum =0;
		int size = arr.size();
		for(int i=0; i<size; i++){
			int value = arr[i];
			totalSum = totalSum+ value;  
		 }

		 ans= (totalSum*1.0) /size;
		 return ans;



	}
};

int main()
{
	int n;
	 cin>>n;
	 vector <int> arr(n);
	 
	 //array input 
	 for (int i=0 ; i<n ; i++){
		cin>>arr[i];
	 }
	 
	 Solution s;
	 
	 cout<<s.findAverage(arr);
}