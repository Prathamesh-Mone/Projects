/* This header file includes trigonometric functions from math.h library
 * Examples of functions are sine, cosine, tangent */

#include <limits.h>
#include "algebra.h"
#include "logexp.h"

#define PI 3.14159265

/* sin functions takes parameter in radians and returns sine of it for finite value
 * of parameter passed */

double mysin(double x) {
	int i=1;
	double sum,temp;
	sum=x;
	temp=x;
	for(i=1;i<20;i++) {
		temp = ((-1)*temp*x*x)/(2*i*(2*i+1));
		sum = sum + temp;
	}
	return sum;
} 

float mysinf(float x) {
        int i=1;
        float sum,temp;
        sum=x;
        temp=x;
        for(i=1;i<20;i++) {
                temp = ((-1)*temp*x*x)/(2*i*(2*i+1));
                sum = sum + temp;
        }
        return sum;
}

long double mysinl(long double x) {
        int i=1;
        long double sum,temp;
        sum=x;
        temp=x;
        for(i=1;i<20;i++) {
                temp = ((-1)*temp*x*x)/(2*i*(2*i+1));
                sum = sum + temp;
        }
        return sum;
}

/* cos functions accept parameter value in radians and returns cos of it for finite 
 * value of arguement */

double mycos(double x) {
	int i=1;
	double sum,temp;
	sum=1;
	temp=1;
	for(i=1;i<20;i++) {
		temp = ((-1)*temp*x*x)/(2*i*(2*i-1));
		sum = sum + temp;
	}
	return sum;
}	

float mycosf(float x) {
        int i=1;
        float sum,temp;
        sum=1;
        temp=1;
        for(i=1;i<20;i++) {
                temp = ((-1)*temp*x*x)/(2*i*(2*i-1));
                sum = sum + temp;
        }
        return sum;
}

long double mycosl(long double x) {
        int i=1;
        double sum,temp;
        sum=1;
        temp=1;
        for(i=1;i<20;i++) {
                temp = ((-1)*temp*x*x)/(2*i*(2*i-1));
                sum = sum + temp;
        }
        return sum;
}

/* tan functions accept parameter value in radians and returns tan of it for finite 
 * values of arguement */

double mytan(double x) {
	double t1,t2,t3;
	t1 = mysin(x);
	t2 = mycos(x);
	if(t2 != 0) {
		t3 = t1 / t2;
		return t3;
	}
	else {
		return INT_MIN;
	}
}

float mytanf(float x) {
        float t1,t2,t3;
        t1 = mysinf(x);
        t2 = mycosf(x);
        if(t2 != 0) {
                t3 = t1 / t2;
                return t3;
        }
        else {
                return INT_MIN;
        }
}

long double mytanl(long double x) {
        long double t1,t2,t3;
        t1 = mysinl(x);
        t2 = mycosl(x);
        if(t2 != 0) {
                t3 = t1 / t2;
                return t3;
        }
        else {
                return INT_MIN;
        }
}

/* asin functions accept parameter value as a number between -1,1 and returns sin 
 * inverse of it in radians */

double myasin(double x) {
	int i=1;
	double sum,temp;
	sum = x;
	temp = x;
	if(x < 1 && x > -1) {
		for(i=1;i<3000;i++) {
			temp = (temp*x*x*(2*i-1))/(2*i);
			sum = sum + (temp/(2*i+1));
		}
		return sum;
	}
	else if(x == 1) {
		return PI/2;
	}
	else if(x == -1) {
		return -PI/2;
	}
	else {
		return INT_MIN;
	}
}

float myasinf(float x) {
        int i=1;
        float sum,temp;
        sum = x;
        temp = x;
        if(x < 1 && x > -1) {
                for(i=1;i<3000;i++) {
                        temp = (temp*x*x*(2*i-1))/(2*i);
                        sum = sum + (temp/(2*i+1));
                }
                return sum;
        }
        else if(x == 1) {
                return PI/2;
        }
        else if(x == -1) {
                return -PI/2;
        }
	else {
                return INT_MIN;
        }
}

long double myasinl(long double x) {
        int i=1;
        long double sum,temp;
        sum = x;
        temp = x;
        if(x < 1 && x > -1) {
                for(i=1;i<3000;i++) {
                        temp = (temp*x*x*(2*i-1))/(2*i);
                        sum = sum + (temp/(2*i+1));
                }
                return sum;
        }
        else if(x == 1) {
                return PI/2;
        }
        else if(x == -1) {
                return -PI/2;
        }
	else {
                return INT_MIN;
        }
}

/* acos functions accept parameter value as a number between -1,1 and returns cos
 * inverse of it int radians */

double myacos(double x) {
	if(x <= 1 && x>=-1) {
		return (PI/2 - myasin(x));
	}
	else {
		return INT_MIN;
	}
}

float myacosf(float x) {
        if(x <= 1 && x>=-1) {
                return (PI/2 - myasinf(x));
        }
        else {
                return INT_MIN;
        }
}

long double myacosl(long double x) {
        if(x <= 1 && x>=-1) {
                return (PI/2 - myasinl(x));
        }
        else {
                return INT_MIN;
        }
}

/* atan functions accept parameter value as a number and returns tan inverse of it for 
 * any value of arguement */

double myatan(double x) {
	double k;
	k = x/(mysqrt(1+x*x));
	return myasin(k);
}

float myatanf(float x) {
        float k;
        k = x/(mysqrtf(1+x*x));
        return myasinf(k);
}

long double myatanl(long double x) {
        long double k;
        k = x/(mysqrtl(1+x*x));
        return myasinl(k);
}

/* sincos functions assign value of sin and cos at a time to its parameters */

void mysincos(double x, double *p,double *q) {
	*p = mysin(x);
	*q = mycos(x);	
}

void mysincosf(float x, float *p,float *q) {
        *p = mysinf(x);
        *q = mycosf(x);
}

void mysincosl(long double x,long double *p,long double *q) {
        *p = mysinl(x);
        *q = mycosl(x);
}

/* atan2 accepts 2 parameters  y and x and returns tan inverse of x/y */

double myatan2(double y,double x) {
	if( x == 0 && y == 0) {
		return INT_MIN;
	}
	else if( x == 0 && y < 0) {
		return -PI;
	}
	else if( x == 0 && y > 0) {
		return PI;
	}
	else if( x > 0 && y == 0) {
		return PI/2;
	}
	else if( x < 0 && y == 0) {
		return -PI/2;
	}
	else {
		double k;
		k = x/y;
		return myatan(k);
	}
}

float myatan2f(float y,float x) {
        if( x == 0 && y == 0) {
                return INT_MIN;
        }
        else if( x == 0 && y < 0) {
                return -PI;
        }
        else if( x == 0 && y > 0) {
                return PI;
        }
        else if( x > 0 && y == 0) {
                return PI/2;
        }
        else if( x < 0 && y == 0) {
                return -PI/2;
        }
        else {
                float k;
                k = x/y;
                return myatanf(k);
        }
}

long double myatan2l(long double y,long double x) {
        if( x == 0 && y == 0) {
                return INT_MIN;
        }
        else if( x == 0 && y < 0) {
                return -PI;
        }
        else if( x == 0 && y > 0) {
                return PI;
        }
        else if( x > 0 && y == 0) {
                return PI/2;
        }
        else if( x < 0 && y == 0) {
                return -PI/2;
        }
        else {
                long double k;
                k = x/y;
                return myatanl(k);
        }
}

/* These functions accept parameters in radians and return hyperbolic sine
 * of the given parameters. */

double mysinh(double x) {
	int i=1;
	double term,sum;
	term = x;
	sum = x;
	for(i=1;i<20;i++) {
		term = (term*x*x)/(2*i*(2*i+1));
		sum =sum + term;
	}
	return sum;
}

float mysinhf(float x) {
        int i=1;
        float term,sum;
        term = x;
        sum = x;
        for(i=1;i<20;i++) {
                term = (term*x*x)/(2*i*(2*i+1));
                sum =sum + term;
        }
        return sum;
}

long double mysinhl(long double x) {
        int i=1;
        long double term,sum;
        term = x;
        sum = x;
        for(i=1;i<20;i++) {
                term = (term*x*x)/(2*i*(2*i+1));
                sum =sum + term;
        }
        return sum;
}

/* These functions accept parameters in radians and return hyperbolic 
 * cosine value for given parameters. */

double mycosh(double x) {
	int i=1;
	double term,sum;
	term = 1;
	sum = 1;
	for(i=1;i<20;i++) {
		term = (term*x*x)/(2*i*(2*i-1));
		sum = sum + term;
	}
	return sum;
}

float mycoshf(float x) {
        int i=1;
        float term,sum;
        term = 1;
        sum = 1;
        for(i=1;i<20;i++) {
                term = (term*x*x)/(2*i*(2*i-1));
                sum = sum + term;
        }
        return sum;
}

long double mycoshl(long double x) {
        int i=1;
        long double term,sum;
        term = 1;
        sum = 1;
        for(i=1;i<20;i++) {
                term = (term*x*x)/(2*i*(2*i-1));
                sum = sum + term;
        }
        return sum;
}

/* These functions accept parameters in radians and return hyperbolic 
 * tangent of the given parameters. */

double mytanh(double x) {
	double k;
	k = mysinh(2*x)/(mycosh(2*x)+1);
	return k;
}

float mytanhf(float x) {
        float k;
        k = mysinh(2*x)/(mycosh(2*x)+1);
        return k;
}

long double mytanhl(long double x) {
        long double k;
        k = mysinh(2*x)/(mycosh(2*x)+1);
        return k;
}

/* These functions return the hyperbolic sine inverse of
 * the given parameters. */

double myasinh(double x) {
	double k;
	k = mylog(x+mysqrt(1+x*x));
	return k;
}

float myasinhf(float x) {
        float k;
        k = mylogf(x+mysqrtf(1+x*x));
        return k;
}

long double myasinhl(long double x) {
        long double k;
        k = mylogl(x+mysqrtl(1+x*x));
        return k;
}

/* These functions return the hyperbolic cosine inverse 
 * of the given parameters. */

double myacosh(double x) {
	double k;
	if(x < 1) {
		return INT_MIN;
	}
	k = mylog(x+mysqrt(x*x-1));
	return k;
}

float myacoshf(float x) {
        float k;
        if(x < 1) {
                return INT_MIN;
        }
        k = mylogf(x+mysqrtf(x*x-1));
        return k;
}

long double myacoshl(long double x) {
        long double k;
        if(x < 1) {
                return INT_MIN;
        }
        k = mylogl(x+mysqrtl(x*x-1));
        return k;
}

/* These functions return hyperbolic tan inverse of given
 * parameters between (-1,1) and returns INT_MIN for the rest. */

double myatanh(double x) {
	double k;
	if(x>=1 || x<=-1) {
		return INT_MIN;
	}
	k = 0.5*mylog((1+x)/(1-x));
	return k;
}

float myatanhf(float x) {
        float k;
        if(x>=1 || x<=-1) {
                return INT_MIN;
        }
        k = 0.5*mylogf((1+x)/(1-x));
        return k;
}

long double myatanhl(long double x) {
        long double k;
        if(x>=1 || x<=-1) {
                return INT_MIN;
        }
        k = 0.5*mylogl((1+x)/(1-x));
        return k;
}

