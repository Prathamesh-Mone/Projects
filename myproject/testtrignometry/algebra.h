/* This header file includes algebric functions like squareroot, Quadratic 
 * solver, simultaneous equation solver upto 3 equations etc. */

#include <limits.h>
#include <stdlib.h>

/* Square root functions accept parameter and return square root of it. */

double mysqrt(double x) {
	double k=0;
	double g1,g2;
	if(x < 0) {
		return INT_MIN;
	}
	else if(x == 0) {
		return 0;
	}
	else {
		while(k*k < x) {
			k++;
		}
		if(k*k == x) {
			return k;
		}
		else {
			g1 = k;
			for(int i=1;i<20;i++) {
				g2 = (g1 + x/g1)/2;
				g1 = g2;
			}
			return g1;
		}
	}
}

float mysqrtf(float x) {
        float k=0;
        float g1,g2;
        if(x < 0) {
                return INT_MIN;
        }
        else if(x == 0) {
                return 0;
        }
        else {
                while(k*k < x) {
                        k++;
                }
                if(k*k == x) {
                        return k;
                }
                else {
                        g1 = k;
                        for(int i=1;i<20;i++) {
                                g2 = (g1 + x/g1)/2;
                                g1 = g2;
                        }
                        return g1;
                }
        }
}

long double mysqrtl(long double x) {
        long double k=0;
        long double g1,g2;
        if(x < 0) {
                return INT_MIN;
        }
        else if(x == 0) {
                return 0;
        }
        else {
                while(k*k < x) {
                        k++;
                }
                if(k*k == x) {
                        return k;
                }
                else {
                        g1 = k;
                        for(int i=1;i<20;i++) {
                                g2 = (g1 + x/g1)/2;
                                g1 = g2;
                        }
                        return g1;
                }
        }
}

/* Hypot functions give the euclidean distance of hypotenuese of right-angled
 * triangle as it's return value. */

double myhypot(double x,double y) {
	double k;
	k = x*x + y*y;
	return mysqrt(k);
}

float myhypotf(float x,float y) {
        float k;
        k = x*x + y*y;
        return mysqrtf(k);
}

long double myhypotl(long double x,long double y) {
        long double k;
        k = x*x + y*y;
        return mysqrtl(k);
}

/* Quadtratic function returns the solution of quadratic equation fed to it
 * in form of coefficients. Coefficients follw a*x^2 + b*x + c = 0 order. */

double *quadratic(double x,double y,double z) {
	double *p = (double *)malloc(2*sizeof(double));
	double D;
	D = y*y - 4*x*z;
	if(D > 0) {
		p[0] = (-y + mysqrt(D))/(2*x);
		p[1] = (-y - mysqrt(D))/(2*x);
	}
	else if(D == 0) {
		p[0] = (-y)/(2*x);
		p[1] = p[0];
	}
	else {
		p[0] = INT_MIN;
		p[1] = INT_MIN;
	}
	return p;
}	

float *quadraticf(float x,float y,float z) {
        float *p = (float *)malloc(2*sizeof(float));
        float D;
        D = y*y - 4*x*z;
        if(D > 0) {
                p[0] = (-y + mysqrtf(D))/(2*x);
                p[1] = (-y - mysqrtf(D))/(2*x);
        }
        else if(D == 0) {
                p[0] = (-y)/(2*x);
                p[1] = p[0];
        }
        else {
                p[0] = INT_MIN;
                p[1] = INT_MIN;
        }
        return p;
}

long double *quadraticl(long double x,long double y,long double z) {
        long double *p = (long double *)malloc(2*sizeof(long double));
        long double D;
        D = y*y - 4*x*z;
        if(D > 0) {
                p[0] = (-y + mysqrtl(D))/(2*x);
                p[1] = (-y - mysqrtl(D))/(2*x);
        }
        else if(D == 0) {
                p[0] = (-y)/(2*x);
                p[1] = p[0];
        }
        else {
                p[0] = INT_MIN;
                p[1] = INT_MIN;
        }
        return p;
}

/* These functions give solution to simultaneous equations in two variables 
 * when coefficients are entered in proper format. If a unique solution does 
 * not exist, it returns INT_MIN. Arguements passed are array of coefficients 
 * of one equation. */

double *simsol2(double a[],double b[]) {
	double *p = (double *)malloc(2*sizeof(double));
	double D,Dx,Dy;
	D = a[0]*b[1]-a[1]*b[0];
	if(D == 0) {
		p[0] = INT_MIN;
		p[1] = p[0];
		return p;
	}
	Dx = a[2]*b[1]-a[1]*b[2];
	Dy = a[0]*b[2]-a[2]*b[0];
	p[0] = Dx/D;
	p[1] = Dy/D;
	return p;
}

float *simsol2f(float a[],float b[]) {
        float *p = (float *)malloc(2*sizeof(float));
        float D,Dx,Dy;
        D = a[0]*b[1]-a[1]*b[0];
        if(D == 0) {
                p[0] = INT_MIN;
                p[1] = p[0];
		return p;
        }
        Dx = a[2]*b[1]-a[1]*b[2];
        Dy = a[0]*b[2]-a[2]*b[0];
        p[0] = Dx/D;
        p[1] = Dy/D;
        return p;
}

long double *simsol2l(long double a[],long double b[]) {
        long double *p = (long double *)malloc(2*sizeof(long double));
        long double D,Dx,Dy;
        D = a[0]*b[1]-a[1]*b[0];
        if(D == 0) {
                p[0] = INT_MIN;
                p[1] = p[0];
		return p;
        }
        Dx = a[2]*b[1]-a[1]*b[2];
        Dy = a[0]*b[2]-a[2]*b[0];
        p[0] = Dx/D;
        p[1] = Dy/D;
        return p;
}

/* These functions give solution to simultaneous equations in three variables 
 * when coefficients are entered in proper format. If a unique solution does 
 * not exist, it returns INT_MIN. Arguements passed are array of coefficients 
 * of one equation. */

double *simsol3(double a[],double b[],double c[]) {
	double *p = (double *)malloc(3*sizeof(double));
	double D,Dx,Dy,Dz;
	D = a[0]*(b[1]*c[2]-b[2]*c[1])-a[1]*(b[0]*c[2]-b[2]*c[0])+a[2]*(b[0]*c[1]-b[1]*c[0]);
	if(D == 0) {
		p[0] = INT_MIN;
		p[1] = p[0];
		p[2] = p[0];
		return p;
	}
	Dx = a[3]*(b[1]*c[2]-b[2]*c[1])-a[1]*(b[3]*c[2]-b[2]*c[3])+a[2]*(b[3]*c[1]-b[1]*c[3]);
	Dy = a[0]*(b[3]*c[2]-b[2]*c[3])-a[3]*(b[0]*c[2]-b[2]*c[0])+a[2]*(b[0]*c[3]-b[3]*c[0]);
	Dz = a[0]*(b[1]*c[3]-b[3]*c[1])-a[1]*(b[0]*c[3]-b[3]*c[0])+a[3]*(b[0]*c[1]-b[1]*c[0]);
	p[0] = Dx/D;
	p[1] = Dy/D;
	p[2] = Dz/D;
	return p;
}

float *simsol3f(float a[],float b[],float c[]) {
        float *p = (float *)malloc(3*sizeof(float));
        float D,Dx,Dy,Dz;
        D = a[0]*(b[1]*c[2]-b[2]*c[1])-a[1]*(b[0]*c[2]-b[2]*c[0])+a[2]*(b[0]*c[1]-b[1]*c[0]);
        if(D == 0) {
                p[0] = INT_MIN;
                p[1] = p[0];
                p[2] = p[0];
                return p;
        }
        Dx = a[3]*(b[1]*c[2]-b[2]*c[1])-a[1]*(b[3]*c[2]-b[2]*c[3])+a[2]*(b[3]*c[1]-b[1]*c[3]);
        Dy = a[0]*(b[3]*c[2]-b[2]*c[3])-a[3]*(b[0]*c[2]-b[2]*c[0])+a[2]*(b[0]*c[3]-b[3]*c[0]);
        Dz = a[0]*(b[1]*c[3]-b[3]*c[1])-a[1]*(b[0]*c[3]-b[3]*c[0])+a[3]*(b[0]*c[1]-b[1]*c[0]);
        p[0] = Dx/D;
        p[1] = Dy/D;
        p[2] = Dz/D;
        return p;
}

long double *simsol3l(long double a[],long double b[],long double c[]) {
        long double *p = (long double *)malloc(3*sizeof(long double));
        long double D,Dx,Dy,Dz;
        D = a[0]*(b[1]*c[2]-b[2]*c[1])-a[1]*(b[0]*c[2]-b[2]*c[0])+a[2]*(b[0]*c[1]-b[1]*c[0]);
        if(D == 0) {
                p[0] = INT_MIN;
                p[1] = p[0];
                p[2] = p[0];
                return p;
        }
        Dx = a[3]*(b[1]*c[2]-b[2]*c[1])-a[1]*(b[3]*c[2]-b[2]*c[3])+a[2]*(b[3]*c[1]-b[1]*c[3]);
        Dy = a[0]*(b[3]*c[2]-b[2]*c[3])-a[3]*(b[0]*c[2]-b[2]*c[0])+a[2]*(b[0]*c[3]-b[3]*c[0]);
        Dz = a[0]*(b[1]*c[3]-b[3]*c[1])-a[1]*(b[0]*c[3]-b[3]*c[0])+a[3]*(b[0]*c[1]-b[1]*c[0]);
        p[0] = Dx/D;
        p[1] = Dy/D;
        p[2] = Dz/D;
        return p;
}

/* The cube root functions accept number and return cube root of it. */

