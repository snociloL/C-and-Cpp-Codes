#include <stdio.h>

struct family {
	char race[2], residencyState[20];
	int id, numChild;
	float numIncome;
};

void input (struct family* s) {
	printf("\n\nPlease insert your ID Number : ");
	scanf(" %d", &s->id);
	printf("Your Race || Malay(M), Chinese(C), Indian(I) : ");
	scanf(" %s", &s->race);
	printf("Your Monthly Income : ");
	scanf(" %f", &s->numIncome);
	printf("Please enter Number of Children(s) : ");
	scanf(" %d", &s->numChild);
	printf("Please enter your residency state : ");
	scanf(" %s", &s->residencyState);
}

int main() {

	struct family s[3];
	char race[2];
	int id, i, sumChild;
	float incomeMalay, incomeChinese, incomeIndian, sumIncome, average;
	
	for(i = 0; i < 3; i++) {
		input(&s[i]);
		sumIncome += s[i].numIncome;
		sumChild += s[i].numChild;
	
		
		if(strcmp(s[i].race, "M") == 0){
			incomeMalay += s[i].numIncome;
		}
		else if(strcmp(s[i].race, "C") == 0){
			incomeChinese += s[i].numIncome;
		}
		else if(strcmp(s[i].race, "I") == 0){
			incomeIndian += s[i].numIncome;
		}
	
	}
	
	for(i = 0; i < 3; i++) {
		printf("\n\nID Number : %d", s[i].id);
		printf("\nRace : %s", s[i].race);
		printf("\nNumber of Child : %d", s[i].numChild);
		printf("\nMonthly Income : RM%3.2f", s[i].numIncome);
		printf("\nState of Residency : %s", s[i].residencyState);

	}
	
	average = sumIncome / sumChild;
	printf("\n\n Average Income per Child : RM %3.2f", average);

	printf("\n\n Total income for each races :-");
	printf("\n Malay : RM%3.2f", incomeMalay);
	printf("\n Chinese : RM%3.2f", incomeChinese);
	printf("\n Indian : RM%3.2f", incomeIndian);

	return 0;
}
