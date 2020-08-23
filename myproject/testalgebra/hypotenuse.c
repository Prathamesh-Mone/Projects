#include <stdio.h>
#include "algebra.h"
int main() {
	double k;
	k = myhypot(3,4);
	printf("%lf\n",k);
	float l;
	l = myhypotf(10,10);
	printf("%f\n",l);
	long double m = myhypotl(17,0);
	printf("%Lf\n",m);
	return 0;
}
