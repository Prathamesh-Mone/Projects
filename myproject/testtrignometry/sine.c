#include <stdio.h>
#include "trignometry.h"
int main() {
	double k;
	float l;
	long double m;
	k = mysin(PI/3);
	l = mysinf(-PI/3);
	m = mysinl(13*PI/6);
	printf("%lf\n%f\n%Lf\n",k,l,m);
	return 0;
}
