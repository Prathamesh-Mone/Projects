#include <stdio.h>
#include "algebra.h"
int main() {
	double k;
	float l;
	long double m;
	k = mysqrt(78.9367);
	l = mysqrtf(0);
	m = mysqrtl(-13.45);
	printf("%lf\n%f\n%Lf\n",k,l,m);
	k = mysqrt(49);
	printf("%lf\n",k);
	return 0;
}
