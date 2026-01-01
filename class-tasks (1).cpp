#include <iostream>
#include <iomanip>
using namespace std;
double average(double array[], int count);
int main()
{
	double values[] = { 1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0 };
	cout << endl
		<< "Average = "
		<< average(values, 10)	//(sizeof values)/(sizeof values[0]))
		<< endl;
return 0;
}//end of the main
 //Function to compute an average
double average(double array[], int count)
{
	double sum = 0.0;
	for (int i = 0; i < count; i++)
		sum += array[i];
	return sum / count;
}//end of average Function
