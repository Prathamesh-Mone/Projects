#include <stdio.h>
#include "algebra.h"
int main() {
	double *k;
	float *l;
	long double *m;
	k = quadratic(1,-4,3);
	printf("%lf\n%lf\n",k[0],k[1]);
	l = quadraticf(1,2,1);
        printf("%f\n%f\n",l[0],l[1]);
	m = quadraticl(1,4,1);
        printf("%Lf\n%Lf\n",m[0],m[1]);
	k = quadratic(1,-2,5);
        printf("%lf\n%lf\n",k[0],k[1]);
	return 0;
}
