#include <iostream>
using namespace std;
 int main()
 {
	bool a=true;
	bool b=false;
	bool c=true;
	if ( a && b &&  c)
	{
		cout<< "all condition are true"<<endl;
	}
	else 
	{
		 cout<< " all condition are not true "<<endl;
	}
	
		if ( a || b ||  c)
	{
		cout<< "all condition are true"<<endl;
	}
	else 
	{
		 cout<< " all condition are not true "<<endl;
	}
	
	bool condition =(39>23);
   cout << !condition<<endl;	
	
 	return 0;
 }