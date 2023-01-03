#include <stdio.h>

void input(int *no1, int *no2) {
	printf("Please enter number 1 : ");
	scanf("%d", no1);
	printf("Please enter number 2 : ");
	scanf("%d", no2);
}

void output(int no1, int no2) {
	int total = no1 + no2;
	printf("Sum of %d + %d is : %d\n", no1, no2, total);
}

int main() {
	int no1, no2;
	input(&no1, &no2);
	output(no1, no2);
	
	return 0;
}
