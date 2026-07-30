#include<iostream>
#include <cstring>
using namespace std;
  int main ()
  {
	char arr[90];
	cout<<" enter the string"<<endl;
	cin.getline( arr , 90 );

	
	int start =0;
	int end = 	strlen(arr) -1;
	while ( start < end)
	{
		swap(arr[start],arr[end]);
		start ++;
		end--;
		
	}
	cout<< arr;
	
  	return 0;
 }