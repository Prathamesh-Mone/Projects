#include <stdio.h>
#include "trignometry.h"
int main() {
	double k1,k2;
	float l1,l2;
	long double m1,m2;
	mysincos(PI/6,&k1,&k2);
	mysincosf(-PI/6,&l1,&l2);
	mysincosl(0,&m1,&m2);
	printf("%lf\n%f\n%Lf\n%lf\n%f\n%Lf\n",k1,l1,m1,k2,l2,m2);
	return 0;
}
