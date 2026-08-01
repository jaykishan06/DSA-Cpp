#include<iostream>
#include<cstring>
using namespace std;
bool checkPlaindrome(char arr[], int size){
		int s=0;
	int e = strlen(arr)-1;
	while(s<e){
		if(arr[s]!= arr[e])
		{
			return false;
		}
		else
		{
			s++;
			e--;
		}
		
	}
	cout<<" palindrome h"<<endl;
	return true;
}
 int main(){
	char arr[90];
	cout<<"enter the stirng to check plalindrome or not"<<endl;
	cin.getline(arr,90);
	cout<<"enter the palindrome or not :"<<checkPlaindrome(arr, 90)<<endl;
return 0;
	 }