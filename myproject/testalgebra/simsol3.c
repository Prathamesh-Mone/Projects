#include <stdio.h>
#include "algebra.h"
int main() {
	double p[4],q[4],r[4],*s;
	p[0] = 1;
	p[1] = 2;
	p[2] = 1;
	p[3] = 8;
	q[0] = 1;
	q[1] = -2;
	q[2] = 1;
	q[3] = 0;
	r[0] = 3;
	r[1] = -1;
	r[2] = 1;
	r[3] = 4;
	s = simsol3(p,q,r);
	printf("%lf\n%lf\n%lf\n",s[0],s[1],s[2]);
	float x[4],y[4],z[4],*t;
        x[0] = 1;
        x[1] = 2;
        x[2] = 1;
        x[3] = 8;
        y[0] = 1;
        y[1] = 2;
        y[2] = 1;
        y[3] = 0;
        z[0] = 3;
        z[1] = -1;
        z[2] = 1;
        z[3] = 4;
        t = simsol3f(x,y,z);
        printf("%f\n%f\n%f\n",t[0],t[1],t[2]);
	long double d[4],e[4],f[4],*g;
        d[0] = 1;
        d[1] = 2.345;
        d[2] = 1.4;
        d[3] = 8.592;
        e[0] = 1;
        e[1] = -2.729;
        e[2] = 1.11;
        e[3] = 4.86;
        f[0] = -3;
        f[1] = -1.33;
        f[2] = 1;
        f[3] = 4.529;
        g = simsol3l(d,e,f);
        printf("%Lf\n%Lf\n%Lf\n",g[0],g[1],g[2]);
	return 0;
}
	
