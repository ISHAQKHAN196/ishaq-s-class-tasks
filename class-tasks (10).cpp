#include <iostream>
using namespace std;
double changeNum(double num); //Function Prototype
int main()
{
		double num = 5.0;
		double result = changeNum(num);
		cout<<"After function execution, num = "<<num <<endl
			<<"Result returned as = "<<result<<endl;
return 0;
}//end of the main
//Function to attempt to modify an argument and return num
double changeNum (double num)
{
	num += 10.0;
	cout<<endl
		<<"Within function, num  =  "<<num<<endl;
	return num;
}//end of changenum Function