#include <stdio.h>

void displayMenu() {
	
	printf("\nSelect either choices :- \n");
	
	printf("\n > D - A dog that has been neutered = RM50");
	printf("\n > d - A dog that has NOT been neutered = RM80");
	printf("\n > C - A cat that has been neutered = RM40");
	printf("\n > c - A cat that has NOT been neutered = RM60");
	printf("\n > B - A bird = RM0");
	printf("\n > R - A reptile = RM0");

}

float calcBill(char);

int main() {
	float total;
	int i=0,a=0;
	
	printf("How many pets? ");
	scanf("%d", &a);
	
	for(i = 0; i < a; i++) {
	char name;
	displayMenu();
	printf("\n\nType of animal : ");
	scanf(" %c", &name);
		
	total += calcBill(name);
	
	}
	printf("\n %3.2f", total);
}

float calcBill(char name) {
	float insuranceFee;
	switch(name) {
      case 'D' :
         printf("A dog that has been neutered = RM50\n" );
         insuranceFee = 50.00;
         break;
      case 'd' :
         printf("A dog that has NOT been neutered = RM80\n" );
         insuranceFee = 80.00;
         break;
      case 'C' :
         printf("A cat that has been neutered = RM40\n" );
         insuranceFee = 40.00;
         break;
      case 'c' :
         printf("A cat that has NOT been neutered = RM60\n" );
         insuranceFee = 60.00;
         break;
      case 'B' :
         printf("A bird = RM0\n" );
         insuranceFee = 0.00;
         break;
      case 'b' :
         printf("A bird = RM0\n" );
         insuranceFee = 0.00;
         break;
      case 'R' :
         printf("A reptile = RM0\n" );
         insuranceFee = 0.00;
         break;
      case 'r' :
         printf("A reptile = RM0\n" );
         insuranceFee = 0.00;
         break;
      default :
         printf("Invalid code\n" );
         return 0;
   }
	return insuranceFee;
}
