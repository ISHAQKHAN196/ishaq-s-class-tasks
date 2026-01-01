#include <iostream>

using namespace std;

int myFunction (int x = 40);

int main(){

	cout<<"x: "<<myFunction()<<endl;
	
return 0;
}//end of the main


int myFunction (int x)
{
  return x;
}//end of the function myFunc