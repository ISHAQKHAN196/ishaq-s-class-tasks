#include <iostream>

using namespace std;

int Add (int, int); //declaration
int Sub (int , int);
int Mul (int , int);
int divide (int, int);
int power(int, int);
void menu(void);


int main()
{
	int num1 = 10;
	int num2 = 5;
	char choice;
	
	menu();
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
	
	case '/':
		cout<<"Result of Division is: "<<divide(num1, num2)<<endl;
		break;

	case 'p':
		cout<<"Power is: "<<power(num1, num2)<<endl;
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

int divide(int x, int y)
{
	if(y!=0)
		return x / y;
	else
		cout<<"cannt divide with 0"<<endl;
}

int power(int n, int p)
{
	int pow = 1;

	for(int i=1; i<=p; i++)
	{
		pow = pow  * n;
	}
	return pow;
}

void menu(void)
{
	cout<<"Press + for Addition:"<<endl;
	cout<<"Press - for Subtration:"<<endl;
	cout<<"Press * for MUltiplication:"<<endl;
	cout<<"Press / for division:"<<endl;
	cout<<"Press p for power:"<<endl;
}