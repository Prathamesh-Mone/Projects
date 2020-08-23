#include <stdio.h>
#include "trignometry.h"
int main() {
	double k;
	float l;
	long double m;
	k = mycosh(PI/3);
	l = mycoshf(PI/2);
	m = mycoshl(-PI/6);
	printf("%lf\n%f\n%Lf\n",k,l,m);
	return 0;
}
