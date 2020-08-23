#include <stdio.h>
#include "trignometry.h"
int main() {
	double k;
	float l;
	long double m;
	k = mytanh(PI/3);
	l = mytanhf(PI/2);
	m = mytanhl(-PI/6);
	printf("%lf\n%f\n%Lf\n",k,l,m);
	return 0;
}
