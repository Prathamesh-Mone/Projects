#include <stdio.h>
#include "trignometry.h"
int main() {
	double k;
	float l;
	long double m;
	k = myacosh(23.56);
	l = myacoshf(0);
	m = myacoshl(1.256);
	printf("%lf\n%f\n%Lf\n",k,l,m);
	k = myacosh(1);
	printf("%lf\n",k);
	return 0;
}
