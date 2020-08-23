#include <stdio.h>
#include "numbertheory.h"
int main() {
	int k;
	k = squarecheck(15);
	if(k == 1) {
		printf("square\n");
	}
	else {
		printf("not square\n");
	}
	k = squarecheck(81);
        if(k == 1) {
                printf("square\n");
        }
        else {
                printf("not square\n");
        }
	k = squarecheck(0);
        if(k == 1) {
                printf("square\n");
        }       
        else {
                printf("not square\n");
        }       
	k = squarecheck(-71);
        if(k == 1) {
                printf("square\n");
        }       
        else {
                printf("not square\n");
        }       
	return 0;
}
