#include <stdio.h>
#include "numbertheory.h"
int main() {
	int k;
	k = numdivisors(24);
	printf("%d\n",k);
	k = numdivisors(0);
        printf("%d\n",k);
	k = numdivisors(-12);
        printf("%d\n",k);
	return 0;
}
