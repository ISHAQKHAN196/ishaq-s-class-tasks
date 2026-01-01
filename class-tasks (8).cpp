#include <iostream>

using namespace std;

int Add (int, int); //declaration
int Sub (int , int);
int Mul (int , int);

int main()
{
	int num1 = 10;
	int num2 = 5;
	char choice;
	
	cout<<"Press + for Addition:"<<endl;
	cout<<"Press - for Subtration:"<<endl;
	cout<<"Press * for MUltiplication:"<<endl;
	cin>>choice;

	switch(choice)
	{
	case '+':
		cout<<"Sum is: "<<Add(num1, num2)<<endl;
		break;

	case '-':
		cout<<"Sub is: "<<Sub(num1, num2)<<endl;
		break;
	
	case '*':
		cout<<"Product is: "<<Mul(num1, num2)<<endl;
		break;
	}
return 0;
}//end of the main

//definition
int Add (int x, int y)
{
  return x + y;
}//end of the function myFunc

int Sub (int x, int y)
{
  return x - y;
}//end of the function myFunc

int Mul (int x, int y)
{
  return x * y;
}//end of the function myFunc