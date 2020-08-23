#include <stdio.h>
#include "logexp.h"
int main() {
	double k;
	float l;
	long double m;
	k = mypow(2,3);
	l = mypowf(2,3.142);
	m = mypowl(4,-2);
	printf("%lf\n%f\n%Lf\n",k,l,m);
	k = mypow(-2,3);
        l = mypowf(7,0);
        m = mypowl(4.678,4);
        printf("%lf\n%f\n%Lf\n",k,l,m);
	k = mypow(3,-5.5674);
	printf("%lf\n",k);
	return 0;
}
