#include <stdio.h>

/* function prototype */

int add(int, int);

void main() {
	int total, no1, no2;
	
	printf("Please enter number 1 : ");
	scanf("%d", &no1);
	printf("Please enter number 2 : ");
	scanf("%d", &no2);
	
	total = add(no1, no2);
	
	printf("Sum of %d + %d is : %d\n", no1, no2, total);
}

/* function definition */
int add(int c, int d) {
	return (c+d);
}
