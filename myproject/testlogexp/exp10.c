#include <stdio.h>
#include "logexp.h"
int main() {
	double k;
	float l;
	long double m;
	k = myexp10(3);
	l = myexp10f(-2);
	m = myexp10l(-45333487558754);
	printf("%lf\n%f\n%Lf\n",k,l,m);
	k = myexp10(4.453);
	printf("%lf\n",k);
	return 0;
}
