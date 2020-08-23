#include <stdio.h>
#include "trignometry.h"
int main() {
	double k;
	float l;
	long double m;
	k = mycos(PI/3);
	l = mycosf(-PI/3);
	m = mycosl(9*PI/4);
	printf("%lf\n%f\n%Lf\n",k,l,m);
	return 0;
}
