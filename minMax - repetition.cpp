#include <iostream>
using namespace std;

int main()
{
	char answer = 'Y';
	int number;
	
	int min = 9999999;
	int max = 0;
	
	while(answer == 'Y' || answer == 'y')
	{
		cout<<"Enter a number : ";
		cin>>number;
		
		//find min value
		if(min>number)
		min = number;
		
		//find max value
		if(max<number)
		max = number;
		
		cout<<"Press Y to enter another number : ";
		cin>>answer;
	}
	
	cout<<"The minimum value is "<<min<<endl;
	cout<<"The maximum value is "<<max<<endl;
	
}
