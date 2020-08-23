#include <stdio.h>
#include "logexp.h"
int main() {
	double k;
	float l;
	long double m;
	k = mylog2(16);
	printf("%lf\n",k);
	l = mylog2f(0.4562);
	printf("%f\n",l);
	m = mylog2l(-10);
	printf("%Lf\n",m);
	k = mylog2(1);
	printf("%lf\n",k);
	return 0;
}
