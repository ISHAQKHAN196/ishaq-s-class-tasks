#include<iostream>
using namespace std;
int sum2(int (&arr)[5], int &sum1);
int main(){
	int arr[5];
	int sum1 = 0;
	
	cout<<"Sum is: "<<sum2(arr, sum1);
	
	return 0;
}
int sum2(int (&arr)[5], int &sum1){
	sum1 = 0;
	for (int i=0;i<5;i++){
		cin>>arr[i];
		sum1 += arr[i];
	}
	return sum1;
}
