#include <iostream>
using namespace std;
int main(){
	int numbers[5];
	float sum=0.00;
	float average=0.00;
	for(int i=0; i<5; i++ )
	{
		cout<<"Enter Number: ";
		cin>>numbers[i];
		sum =sum + numbers[i];
	}
	average = sum / 5;
	cout<<"The sum is: "<<sum<<endl;;
	cout<<"The average is: "<<average<<endl;
} 