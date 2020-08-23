#include <stdio.h>
#include "numbertheory.h"
int main() {
	int k;
	k = primecheck(15);
	if(k == 1) {
		printf("prime\n");
	}
	else {
		printf("not prime\n");
	}
	k = primecheck(23);
        if(k == 1) {
                printf("prime\n");
        }
        else {
                printf("not prime\n");
        }
	k = primecheck(1);
        if(k == 1) {
                printf("prime\n");
        }       
        else {
                printf("not prime\n");
        }       
	k = primecheck(-71);
        if(k == 1) {
                printf("prime\n");
        }       
        else {
                printf("not prime\n");
        }       
	return 0;
}
