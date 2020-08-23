#include <stdio.h>
#include "algebra.h"
int main() {
	double *k,p[3],q[3];
	p[0] = 1;
	p[1] = 1;
	p[2] = 3;
	q[0] = 1;
	q[1] = -1;
	q[2] = 5;
	k = simsol2(p,q);
	printf("%lf\n%lf\n",k[0],k[1]);
	float *l,u[3],v[3];
        u[0] = 1;
        u[1] = 1;
        u[2] = 3;
        v[0] = 1;
        v[1] = 1;
        v[2] = 5;
        l = simsol2f(u,v);
        printf("%f\n%f\n",l[0],l[1]);
	long double *m,r[3],s[3];
        r[0] = 1.657;
        r[1] = 2.823;
        r[2] = 6.5478;
        s[0] = 2.786;
        s[1] = -1.987;
        s[2] = 5.4638;
        m = simsol2l(r,s);
        printf("%Lf\n%Lf\n",m[0],m[1]);
	return 0;
}

