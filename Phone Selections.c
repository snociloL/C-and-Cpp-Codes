#include <stdio.h>

void choice() {
	
	printf("\nSelect either choices :- \n");
	
	printf("\n > 1 - Apple iPhone 5s = RM2260");
	printf("\n > 2 - Samsung Galaxy Note 3 = RM2098");
	printf("\n > 3 - Samsung Galaxy Note 2 = RM1499");
	printf("\n > 4 - LG Nexus 5 LTE = RM1579");
	printf("\n > 5 - Sony Xperia Z Ultra = RM1419");

}

float calc(int);

int main() {
	float total, afterDiscount;
	int id;
	
	choice();
	printf("\n\nType of phone : ");
	scanf(" %d", &id);	
	total = calc(id);
	
	printf("\nPrice before discount : RM%3.2f", total);
	afterDiscount = total*0.75;
	printf("\nPrice After Discount : RM%3.2f", afterDiscount);
	
}

float calc(int id) {
	float price;
	if(id == 1){
		printf("\nApple iPhone 5s = RM2260\n" );
	    price = 2260.00;
	}
	else if(id == 2){
		printf("\nSamsung Galaxy Note 3 = RM2098\n" );
	    price = 2098.00;
	}
	else if(id == 3){
		printf("\nSamsung Galaxy Note 2 = RM1499\n" );
	    price = 1499.00;
	}
	else if(id == 4){
		printf("\nLG Nexus 5 LTE = RM1579\n" );
	    price = 1579.00;
	}
	else {
		printf("\nSony Xperia Z Ultra = RM1419\n" );
	    price = 1419.00;
	}
		
//	switch(id) {
//      case 1 :
//         printf("\nApple iPhone 5s = RM2260\n" );
//         price = 2260.00;
//         break;
//      case 2 :
//         printf("\nSamsung Galaxy Note 3 = RM2098\n" );
//         price = 2098.00;
//         break;
//      case 3 :
//         printf("\nSamsung Galaxy Note 2 = RM1499\n" );
//         price = 1499.00;
//         break;
//      case 4 :
//         printf("\nLG Nexus 5 LTE = RM1579\n" );
//         price = 1579.00;
//         break;
//      default :
//         printf("\nSony Xperia Z Ultra = RM1419\n" );
//         price = 1419.00;
//         break;
//   }
	return price;
}
