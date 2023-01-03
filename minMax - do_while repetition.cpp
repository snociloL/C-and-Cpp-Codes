#include <iostream>
using namespace std;

int main()
{
	int number = 999;
	
	int min = 9999999;
	int max = 0;
	
	do
	{
		cout<<"Enter a number : ";
		cin>>number;
		
		if(number !=999)
		{
		//find min value
		if(min>number)
		min = number;
		
		//find max value
		if(max<number) 
		max = number;
		
		}
	
	}while(number != 999);
	cout<<"The minimum value is "<<min<<endl;
	cout<<"The maximum value is "<<max<<endl;
}
