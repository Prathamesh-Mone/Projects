#include <stdio.h>
#include "trignometry.h"
int main() {
	double k;
	float l;
	long double m;
	k = myatanh(0.56);
	l = myatanhf(0);
	m = myatanhl(-0.256);
	printf("%lf\n%f\n%Lf\n",k,l,m);
	k = myatanh(12.34);
	printf("%lf\n",k);
	return 0;
}
