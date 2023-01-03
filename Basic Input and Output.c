#include <stdio.h>

void main() {
	char name[20];
	int age;
	float salary;
	
	printf("Name : ");
	scanf("%s", &name);
	printf("Age : ");
	scanf("%d", &age);
	printf("Salary : RM");
	scanf("%f", &salary);
	
	printf("Your name is %s, age %d with salary RM %3.2f.", name, age, salary);
	
}
