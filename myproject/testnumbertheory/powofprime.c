#include <stdio.h>
#include "numbertheory.h"
int main() {
	int k;
	k = 12;
	printf("%d\n",powofprime(3,k));
	k = -28;
        printf("%d\n",powofprime(3,k));
	k = 100;
        printf("%d\n",powofprime(5,k));
	k = 30;
        printf("%d\n",powofprime(10,k));
	k = 0;
        printf("%d\n",powofprime(2,k));
	k = 192;
        printf("%d\n",powofprime(2,k));
	return 0;
}
