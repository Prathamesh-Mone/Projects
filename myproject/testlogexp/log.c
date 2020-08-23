#include <stdio.h>
#include "logexp.h"
int main() {
	double k;
	float l;
	long double m;
	k = mylog(6.2345);
	printf("%lf\n",k);
	l = mylogf(0.4562);
	printf("%f\n",l);
	m = mylogl(-10);
	printf("%Lf\n",m);
	k = mylog(1);
	printf("%lf\n",k);
	return 0;
}
