#include <stdio.h>
#include "numbertheory.h"
int main(){
	double k;
	float l;
	long double m;
	k = myfloor(2.7654);
	l = myfloorf(-2.7654);
	m = myfloorl(-4);
	printf("%lf\n%f\n%Lf\n",k,l,m);
	return 0;
}
