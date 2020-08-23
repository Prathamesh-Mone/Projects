#include <stdio.h>
#include "logexp.h"
int main() {
	double k;
	float l;
	long double m;
	k = myexp(3);
	l = myexpf(-2);
	m = myexpl(-45333487558754);
	printf("%lf\n%f\n%Lf\n",k,l,m);
	return 0;
}
