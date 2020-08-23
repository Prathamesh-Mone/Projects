#include <stdio.h>
#include "trignometry.h"
int main() {
	double k;
	float l;
	long double m;
	k = mytan(PI/3);
	l = mytanf(-PI/3);
	m = mytanl(PI/4);
	printf("%lf\n%f\n%Lf\n",k,l,m);
	k = mytan(-PI/2);
        l = mytanf(0);
        m = mytanl(PI/2);
        printf("%lf\n%f\n%Lf\n",k,l,m);
	return 0;
}
