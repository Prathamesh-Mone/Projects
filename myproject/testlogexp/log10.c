#include <stdio.h>
#include "logexp.h"
int main() {
	double k;
	float l;
	long double m;
	k = mylog10(17.6758);
	printf("%lf\n",k);
	l = mylog10f(0.4562);
	printf("%f\n",l);
	m = mylog10l(-10);
	printf("%Lf\n",m);
	k = mylog10(1);
	printf("%lf\n",k);
	return 0;
}
