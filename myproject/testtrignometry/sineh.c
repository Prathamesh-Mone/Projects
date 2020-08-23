#include <stdio.h>
#include "trignometry.h"
int main() {
	double k;
	float l;
	long double m;
	k = mysinh(PI/3);
	l = mysinhf(PI/2);
	m = mysinhl(-PI/6);
	printf("%lf\n%f\n%Lf\n",k,l,m);
	return 0;
}
