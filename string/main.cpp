#include<iostream>
#include<cstring>
using namespace std;
int replace(char arr[], int size )
{
	for (int i=0; i<size; i++)
	{
		if(arr[i]==' '){
			arr[i]='X';
		}
	}
	return 0;
}
int getLength(char arr[])
{
	int count = 0;

	while (arr[count] != '\0')
	{
		count++;
	}

	return count;
}

int main()
{
	char arr[90];

	cout << "Enter the value of array: ";
	cin.getline(arr, 90);
	replace( arr, 90);
	cout<< arr << endl;

	// cout << "Length of the array is " << getLength(arr)<<endl;
	// cout<< strlen(arr)<<endl;
	return 0;
}