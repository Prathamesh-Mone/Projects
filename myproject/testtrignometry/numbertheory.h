/* This header file includes some number theorotic functions like gcd, lcm, 
 * prime factors, highest power in factorial etc. */

#include <limits.h>
#include <stdlib.h>

typedef struct factor{
	int prime;
	int power;
}factor;

/* Function will return gcd of two integers. If any of them is zero,it will 
 * return minimum integer.Function assumes that first parameter is always 
 * greater than second parameter. */

int gcd(int x,int y) {
	int r,k;
	if(x == 0 || y == 0) {
		return INT_MIN;
	}
	r = x % y;
	if(r != 0) {
		k = gcd(y,r);
	}
	else {
		return y;
	}
}

/* function returns the lcm of two numbers. */

int lcm(int x,int y) {
	int k,m;
	if(x == 0 || y == 0) {
		return INT_MIN;
	}
	m = x * y;
	k = gcd(x,y);
	return (m/k);
}

/* This category of functions return the fractional part of the given number. */

double myfracpart(double x) {
	double k;
	k = x - (int)x;
	return k;
}	

float myfracpartf(float x) {
        float k;
        k = x - (int)x;
	return k;
}

long double myfracpartl(long double x) {
        long double k;
        k = x - (int)x;
        return k;
}

/* These function returns greatest integer less than or equal to the given number. If
 * the number is itself an integer, it returns same value. */

double myfloor(double x) {
	double k;
	k = x - myfracpart(x);
	if(x < 0 && myfracpart(x) != 0) {
		return k-1;
	}
	return k;
}

float myfloorf(float x) {
        float k;
        k = x - myfracpartf(x);
        if(x < 0 && myfracpartf(x) != 0) {	
		return k-1;
	}
	return k;
}

long double myfloorl(long double x) {
        long double k;
        k = x - myfracpartl(x);
        if(x < 0 && myfracpartl(x) != 0) {
		return k-1;
	}
	return k;
}

/* These function returns least integer greater than or equal to the given number. If
 * the number is itself an integer, it returns same value. */

double myceil(double x) {
	double k;
	k = myfloor(x);
	if(x != k) {
		return (k + 1);
	}
	return k;
}

float myceilf(float x) {
        float k;
        k = myfloorf(x);
        if(x != k) {
		return (k + 1);
	}
	return k;
}

long double myceill(long double x) {
        long double k;
        k = myfloorl(x);
        if(x != k) {
		return (k + 1);
	}
	return k;
}

/* This function calculates the value of factorial of given non-negative integer.
 * Arguement passed should be strictly non-negative integer. */

int factorial(int x) {
	int term=1;
	if(x < 0) {
		return INT_MIN;
	}
	else if(x == 0) {
		return 1;
	}
	else if(x == 1) {
		return 1;
	}
	else {
		while(x != 0) {
			term  = term * x;
			x--;
		}
		return term;
	}
}

/* This function finds the number of divisors of the given number. Arguements 
 * passed should be strictly non-negative integers. */

int numdivisors(int x) {
	int k=0,i=1;
	if(x < 0) {
		return INT_MIN;
	}
	while(i<x+1) {
		if(x%i == 0) {
			k++;
		}
		i++;
	}
	return k;
}

/* This function checks whether given number is prime or composite. Arguement 
 * passed should be strictly non-negative integer. */

int primecheck(int x) {
	int k = numdivisors(x);
	if(k == 2) {
		return 1;
	}
	else {
		return 0;
	}
}

/* This function checks whether given number is a perfect square or not. 
 * Arguement passed should be an integer. */

int squarecheck(int x) {
	if(x < 0) {
		return 0;
	}
	else if(x == 0) {
		return 1;
	}
	else {
		int k = numdivisors(x);
		if(k % 2 == 1) {
			return 1;
		}
		else {
			return 0;
		}
	}
}

/* This function returns the number of prime numbers less than or equal 
 * to the entered number. Works only on positive numbers. */

int numprimes(int n) {
	int count=0,i=2;
	if(n == 0) {
		return 0;
	}
	if(n < 0) {
		return INT_MIN;
	}
	while(i < n+1) {
		if(primecheck(i) == 1) {
			count++;
		}
		i++;
	}
	return count;
}

/* This function returns the number of primes less than or equal to 
 * the entered number which divide the entered number. Works only on
 * positive integers. */

int divprimes(int n) {
	int count=0,i=1;
	if(n == 0) {
		return 0;
	}
	if(n < 0) {
	       return INT_MIN;
	}
	while(i < n+1) {
		if(n%i == 0 && primecheck(i) == 1) {
			count++;
		}
		i++;
	}
	return count;
}

/* This function returns the highest power of prime which divides the 
 * second entered parameter. Works strictly on positive integers. */

int powofprime(int p,int n) {
	int k,count=0;
	k = p;
	if(primecheck(p) != 1) {
		return INT_MIN;
	}
	if(n <= 1) {
		return INT_MIN;
	}
	while(n%k == 0) {
		k = k*p;
		count++;
	}
	return count;
}

/* This function returns a structure */

factor *primefact(int n) {
	int k,i=1,j=0;
	k = divprimes(n);
	factor *f = (factor *)malloc(k*sizeof(factor));
	while(i < n+1) {
		if(n%i == 0 && primecheck(i) == 1) {
			f[j].prime = i;
			f[j].power = powofprime(i,n);
			j++;
		}
		i++;
	}
	return f;
}
