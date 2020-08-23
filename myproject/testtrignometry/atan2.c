#include <stdio.h>
#include "trignometry.h"
int main() {
	double k;
	float l;
	long double m;
	k = myatan2(0.7265,0.2768);
	l = myatan2f(0.7265,-0.2768);
	m = myatan2l(0.7265,0);
	printf("%lf\n%f\n%Lf\n",k,l,m);
	k = myatan2(-0.2873,0);
        l = myatan2f(0,1);
        m = myatan2l(0,0);
        printf("%lf\n%f\n%Lf\n",k,l,m);
	return 0;
}
