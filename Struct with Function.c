#include <stdio.h>
#include <string.h>

struct simple {
	int no1, no2;
};

void input (struct simple* no) {
	printf("Please enter number 1 : ");
	scanf("%d", &no->no1);
	printf("Please enter number 2 : ");
	scanf("%d", &no->no2);
}

int count(int a, int b) {
	return (a+b);
}

void result(int total) {
	char status[40];
	if(total>100)
		strcpy(status, "More than 100");
	else
		strcpy(status, "less than 100");
	
	printf("\n Your number is %s", status);
	if(strcmp(status,"More than 100")==0)
		printf(" which is a large number");
	
	else
		printf(" which is a small number");
}

int main() {
	struct simple no;
	int total;
	char name[40];
	
	printf("Name : ");
	gets(name);
	
	input(&no);
	total = count(no.no1, no.no2);
	printf(" Sum of these two numbers is %d", total);
	result(total);
	
	return 0;
}
