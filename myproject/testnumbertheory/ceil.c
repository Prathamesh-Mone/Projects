#include <stdio.h>
#include "numbertheory.h"
int main(){
	double k;
	float l;
	long double m;
	k = myceil(2.7654);
	l = myceilf(-2.7654);
	m = myceill(4);
	printf("%lf\n%f\n%Lf\n",k,l,m);
	return 0;
}
