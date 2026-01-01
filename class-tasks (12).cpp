#include <iostream>
using namespace std;

int makeDouble (int x);

int main()
{
	int number = 20;
	int result = makeDouble(number);
	cout<<"Doubled Number: "<<result<<endl;
	
return 0;
}//end of the main

int makeDouble (int x)
{
  return x * 2;
}//end of the function myFunc