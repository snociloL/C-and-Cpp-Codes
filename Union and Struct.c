#include <stdio.h>

union job { 			//defining a union
	char name[32];
	float salary;
	int worker_no;

}u;

struct job1 {
	char name[32];
	float salary;
	int worker_no;
}s;

int main() {
	printf("Size of union = %d", sizeof(u));
	printf("\nSize of structure = %d", sizeof(s));
	
	return 0;
}
