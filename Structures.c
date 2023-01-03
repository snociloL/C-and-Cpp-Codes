#include <stdio.h>

struct simple {
	int no1,no2;
};

int main() {
	struct simple no;
	int total;
	printf("Please enter number 1 : ");
	scanf("%d", &no.no1);
	printf("Please enter number 2 : ");
	scanf("%d", &no.no2);
	
	total = no.no1 + no.no2;
	printf("Sum of those two numbers is %d", total);
	return 0;
}
