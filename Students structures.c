#include <stdio.h>

struct students {
	char name[20];
	int id, programCode;
};

void input (struct students* s) {
	printf("\n\nPlease enter name : ");
	scanf("%s", &s->name);
	printf("Please enter ID number : ");
	scanf("%d", &s->id);
	printf("Please enter Program Code : ");
	scanf("%d", &s->programCode);
}

int main() {

	struct students s[2];
	char name[20];
	int id, i;
	int programCode;
	
	for(i = 0; i < 2; i++) {
	input(&s[i]);
	}
	
	for(i = 0; i < 2; i++) {
	printf("\n\n Student Name : %s", s[i].name);
	printf("\n Student ID : %d", s[i].id);
	printf("\n Student Program Code : %d", s[i].programCode);
	}


	printf("\nSize of student structure : %d", sizeof(s));
	return 0;
}
