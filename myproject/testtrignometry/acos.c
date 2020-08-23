#include <stdio.h>
#include "trignometry.h"
int main() {
	double k;
	float l;
	long double m;
	k = myacos(0.6589);
	l = myacosf(-0.6589);
	m = myacosl(0.6589);
	printf("%lf\n%f\n%Lf\n",k,l,m);
	k = myacos(-1);
        l = myacosf(1);
        m = myacosl(1.76);
        printf("%lf\n%f\n%Lf\n",k,l,m);
	return 0;
}
