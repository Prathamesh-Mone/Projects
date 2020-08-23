#include <stdio.h>
#include "trignometry.h"
int main() {
	double k;
	float l;
	long double m;
	k = myasinh(23.56);
	l = myasinhf(0);
	m = myasinhl(-1.256);
	printf("%lf\n%f\n%Lf\n",k,l,m);
	return 0;
}
