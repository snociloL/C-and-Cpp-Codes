#include <iostream>
using namespace std;

int main()
{
	float investment, profit;
	cout<<"Amount of investment : RM";
	cin>>investment;
	cout<<"Amount of profit : RM ";
	cin>>profit;
	
	if(investment >= 50000 && profit >20000)
		cout<<"\nThis investment is worthy to continue."<<endl;
	else
		cout<<"This investment is a waste of money.";
	
}
