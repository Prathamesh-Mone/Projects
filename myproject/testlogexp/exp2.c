#include <stdio.h>
#include "logexp.h"
int main() {
	double k;
	float l;
	long double m;
	k = myexp2(3);
	l = myexp2f(-2);
	m = myexp2l(-45333487558754);
	printf("%lf\n%f\n%Lf\n",k,l,m);
	k = myexp2(4.453);
	printf("%lf\n",k);
	return 0;
}
