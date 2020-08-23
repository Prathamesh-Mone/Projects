#include <stdio.h>
#include "trignometry.h"
int main() {
	double k;
	float l;
	long double m;
	k = myasin(0.7265);
	l = myasinf(-0.7265);
	m = myasinl(0.7265);
	printf("%lf\n%f\n%Lf\n",k,l,m);
	k = myasin(-1);
        l = myasinf(1);
        m = myasinl(1.76);
        printf("%lf\n%f\n%Lf\n",k,l,m);
	return 0;
}
