#include <stdio.h>
#include "numbertheory.h"
int main(){
	double k;
	float l;
	long double m;
	k = myfracpart(2.7654);
	l = myfracpartf(-2.7654);
	m = myfracpartl(4);
	printf("%lf\n%f\n%Lf\n",k,l,m);
	return 0;
}
