/*
Your program is able to read the amount of sales for a sales executive.
If the sale is more than RM10, 000, then the commission will be 5% of the sale. Otherwise, the commission is only 3% of the sale.
Your program is able to calculate the amount of commission by multiplying the percentage of commission with sale.
Your program is also able to display the amount of commission to the sales executive.
*/

#include <iostream>
using namespace std;

int main()
{
	float commission, sales;
	cout<<"Please insert the amount of sales: RM";
	cin>>sales;
	
	if(sales > 10000)
	{
	
		float commission = sales*5/100;
		cout<<"The commission is RM"<<commission<<"."<<endl;
	}
	else
	{
		float commision = sales*3/100;
		cout<<"The commission is RM"<<commission<<"."<<endl;
	}
	return 0;
}
