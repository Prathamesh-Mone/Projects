#include <stdio.h>
#include "numbertheory.h"
int main() {
	int k;
	k = 12;
	printf("%d\n",numprimes(k));
	k = -28;
        printf("%d\n",numprimes(k));
	k = 100;
        printf("%d\n",numprimes(k));
	k = 30;
        printf("%d\n",numprimes(k));
	k = 0;
        printf("%d\n",numprimes(k));
	return 0;
}
