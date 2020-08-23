/* This header file contains functions which are logarithmic or exponential
 * like power, log, e to the power something etc. */

#include <limits.h>
#include "numbertheory.h"

#define E 2.71828182

/* These functions give return the natural log of given number if it is greater 
 * than zero, else it returns int min. */

double mylog(double x) {
	int i=1;
	double term,sum,k;
	k = x;
	if(x <= 0) {
		return INT_MIN;
	}
	if(x == 1) {
		return 0;
	}
	if(x > 1) {
		x = 1/x;
	}
	term = x-1;
	sum = x-1;
	for(i=1;i<10000;i++) {
		term = (-1)*term*(x-1);
		sum = sum + term/(i+1);
	}
	if(k > 1) {
		return -sum;
	}
	return sum;
}

float mylogf(float x) {
        int i=1;
        float term,sum,k;
	k = x;
        if(x <= 0) {
                return INT_MIN;
        }
        if(x == 1) {
                return 0;
        }
        if(x > 1) {
                x = 1/x;
        }
        term = x-1;
        sum = x-1;
        for(i=1;i<10000;i++) {
                term = (-1)*term*(x-1);
                sum = sum + term/(i+1);
        }
        if(k > 1) {
                return -sum;
        }
        return sum;
}

long double mylogl(long double x) {
        int i=1;
        long double term,sum,k;
	k = x;
        if(x <= 0) {
                return INT_MIN;
        }
        if(x == 1) {
                return 0;
        }
        if(x > 1) {
                x = 1/x;
        }
        term = x-1;
        sum = x-1;
        for(i=1;i<10000;i++) {
                term = (-1)*term*(x-1);
                sum = sum + term/(i+1);
        }
        if(k > 1) {
                return -sum;
        }
        return sum;
}

/* These functions return the logarithm to the base 10 for given non negative 
 * numbers. It returns INT MIN for rest of arguements. */

double mylog10(double x) {
	double k;
	k = mylog(x)/mylog(10);
	return k;
}

float mylog10f(float x) {
        float k;
        k = mylogf(x)/mylogf(10);
        return k;
}

long double mylog10l(long double x) {
        long double k;
        k = mylogl(x)/mylogl(10);
        return k;
}

/* These functions return logarithm to the base 2 for given non-negative 
 * numbers. It returns INT MIN for rest of arguements. */

double mylog2(double x) {
	double k;
	k = mylog(x)/mylog(2);
	return k;
}

float mylog2f(float x) {
        float k;
        k = mylogf(x)/mylogf(2);
        return k;
}

long double mylog2l(long double x) {
        long double k;
        k = mylogl(x)/mylogl(2);
        return k;
}

/* These functions take two arguements x,y and returns yth power of 
 * x for all possible inputs. */

double mypow(double x, double y) {
	if(y == 0 && x != 0) {
		return 1;
	}
	if(y == 0 && x == 0) {
		return INT_MIN;
	}
	if(y != myfloor(y)) {
		return INT_MIN;
	}
	double prod=1,sign=0,term;
	term = x;
	if(y < 0) {
		sign = 1;
		y = -y;
	}
	while(y > 0) {
		if((int)y % 2 == 1) {
			prod = prod * term;
		}
		term = term * term;
		y = y /	2;
	}
	if(sign == 1) {
		return 1/prod;
	}
	return prod;
}

float mypowf(float x, float y) {
        if(y == 0 && x != 0) {
                return 1;
        }
        if(y == 0 && x == 0) {
                return INT_MIN;
        }
        if(y != myfloorf(y)) {
                return INT_MIN;
        }
        float prod=1,sign=0,term;
        term = x;
        if(y < 0) {
                sign = 1;
                y = -y;
        }
        while(y > 0) {
                if((int)y % 2 == 1) {
                        prod = prod * term;
                }
                term = term * term;
                y = y / 2;
        }
        if(sign == 1) {
                return 1/prod;
        }
        return prod;
}

long double mypowl(long double x, long double y) {
        if(y == 0 && x != 0) {
                return 1;
        }
        if(y == 0 && x == 0) {
                return INT_MIN;
        }
        if(y != myfloorl(y)) {
                return INT_MIN;
        }
        long double prod=1,sign=0,term;
        term = x;
        if(y < 0) {
                sign = 1;
                y = -y;
        }
        while(y > 0) {
                if((int)y % 2 == 1) {
                        prod = prod * term;
                }
                term = term * term;
                y = y / 2;
        }
        if(sign == 1) {
                return 1/prod;
        }
        return prod;
}

/* These functions return the exponential value of the given number for 
 * any value of x. */

double myexp(double x) {
	if(x < INT_MIN) {
		return 0;
	}
	int i=1;
	double sum,term;
	sum = 1;
	term = 1;
	for(i=1;i<100;i++) {
		term = (term*x)/i;
		sum = sum + term;
	}
	return sum;
}

float myexpf(float x) {
        if(x < INT_MIN) {
                return 0;
        }
        int i=1;
        float sum,term;
        sum = 1;
        term = 1;
        for(i=1;i<100;i++) {
                term = (term*x)/i;
                sum = sum + term;
        }
        return sum;
}

long double myexpl(long double x) {
        if(x < INT_MIN) {
                return 0;
        }
        int i=1;
        long double sum,term;
        sum = 1;
        term = 1;
        for(i=1;i<100;i++) {
                term = (term*x)/i;
                sum = sum + term;
        }
        return sum;
}

/* These functions return the value of entered power of 2 as exponent. */

double myexp2(double x) {
	double prod;
	prod = x*mylog(2);
	return myexp(prod);
}

float myexp2f(double x) {
        float prod;
        prod = x*mylogf(2);
        return myexpf(prod);
}

long double myexp2l(double x) {
        long double prod;
        prod = x*mylogl(2);
        return myexpl(prod);
}

/* These functions return the value of entered power of 10 as exponent. */

double myexp10(double x) {
        double prod;
        prod = x*mylog(10);
        return myexp(prod);
}

float myexp10f(double x) {
        float prod;
        prod = x*mylogf(10);
        return myexpf(prod);
}

long double myexp10l(double x) {
        long double prod;
        prod = x*mylogl(10);
        return myexpl(prod);
}


