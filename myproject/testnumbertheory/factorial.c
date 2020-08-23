#include <stdio.h>
#include "numbertheory.h"
int main() {
	int k;
	k = factorial(5);
	printf("%d\n",k);
	k = factorial(0);
        printf("%d\n",k);
	k = factorial(1);
        printf("%d\n",k);
	k = factorial(-3);
        printf("%d\n",k);
	return 0;
}
