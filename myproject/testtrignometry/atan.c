#include <stdio.h>
#include "trignometry.h"
int main() {
	double k;
	float l;
	long double m;
	k = myatan(0.7265);
	l = myatanf(-0.7265);
	m = myatanl(0.7265);
	printf("%lf\n%f\n%Lf\n",k,l,m);
	k = myatan(28.73);
        l = myatanf(1);
        m = myatanl(-1);
        printf("%lf\n%f\n%Lf\n",k,l,m);
	return 0;
}
