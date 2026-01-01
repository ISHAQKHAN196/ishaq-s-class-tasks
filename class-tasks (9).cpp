#include <iostream>
using namespace std;

int myFunction (int x);

int main(){

	int result = myFunction(20);
	cout<<"x: "<<result<<endl;
	
return 0;
}//end of the main

int myFunction (int x)
{
  return x + 10;
}//end of the function myFunc