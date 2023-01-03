#include <stdio.h>

void arrayCalc(int n[]) {
	int j;
	for(j=0; j<5; j++) {
		printf("Element[%d] = %d\n", j, n[j]);
	}
}

int main() {
	int n[5] = {1,2,3,4,5};
	
	arrayCalc(n);
	return 0;
}
