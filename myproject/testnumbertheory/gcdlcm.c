#include <stdio.h>
#include "numbertheory.h"
int main() {
	int k,l;
	k = gcd(10,24);
	l = lcm(10,24);
	printf("%d\n%d\n",k,l);
	k = gcd(0,12);
        l = lcm(0,12);
        printf("%d\n%d\n",k,l);
	k = gcd(13,17);
        l = lcm(13,17);
        printf("%d\n%d\n",k,l);
	return 0;
}

