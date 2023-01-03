#include <stdio.h>

void main() {
	int a;
	for(a = 10; a < 20; a++) {
		if(a%2==0) {
			printf("value of a : %d\n", a++);
		}
	}
}
