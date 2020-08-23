#include <stdio.h>
#include "numbertheory.h"
int main() {
	int i,k;
	factor *g;
	g = primefact(32);
	k = divprimes(32);
	printf("1");
	for(i=0;i<k;i++) {
		printf("*(%d^%d)",g[i].prime,g[i].power);
	}
	printf("\n");
	g = primefact(28);
        k = divprimes(28);
        printf("1");
        for(i=0;i<k;i++) {
                printf("*(%d^%d)",g[i].prime,g[i].power);
        }
        printf("\n");
	g = primefact(1001);
        k = divprimes(1001);
        printf("1");
        for(i=0;i<k;i++) {
                printf("*(%d^%d)",g[i].prime,g[i].power);
        }
        printf("\n");
	return 0;
}
