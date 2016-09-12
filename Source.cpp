///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//2016112096 박재용 심프 2/////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

double getRand(const double min, const double max) 
{
	double temp = ((double)rand()) / (double)RAND_MAX;

	temp = min + (max - min)*temp;

	return temp;
}

bool inrec(const double x, const double y) {
	const double x_c = 1.5;
		const double y_c = 0.5;
		const double w_c = 3.0;
		const double h_c = 0.5;
	return (x<x_c + 0.5*w_c && x>x_c - 0.5*w_c) && (y<y_c + 0.5*h_c && y>y_c - 0.5*h_c);
}
bool incircle(const double x, const double y ) {
	const double x_c = 0.5; const double y_c = 0.5; const double r_c = 0.5;
		return (x - x_c)*(x - x_c)/ + (y - y_c)* (y - y_c) < r_c*r_c;
}
bool inCircle(const double x, const double y) {
	const double x_c = 0.5; 
	const double y_c = 0.5; 
	const double r_c = 0.5;
	return (x - x_c)*(x - x_c) + (y - y_c)* (y - y_c) < r_c*r_c;
}
void main() {
	FILE* of = fopen("elipse.csv", "w");
	srand((unsigned int)time(NULL));

	 double x, y;
	for (int i = 0; i < 10000; i++) {
		x = getRand(0, 3.0);
		y = getRand(0, 1.0);
		if (incircle(x, y) || inCircle(x, y, 2.5) || inrec(x, y))
			fprintf(of, "%f, %f\n", x, y);
	}

	
}
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//2016112096 박재용 심프 3/////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

	double getRand(const double min, const double max) {
	double temp = ((double)rand()) / (double)RAND_MAX;
	temp = min + (max - min)*temp;
	return temp;
}
bool inElips(const double x, const double y,) {
	const double x_c = 1.0;
	const double y_c = 0.5; 
	const double a_e = 1.0; 
	const double b_e = 0.5;
	return b_e*b_e*(x - x_c)*(x - x_c) + a_e*a_e*(y - y_c)* (y - y_c) <= a_e*a_e*b_e*b_e;
}
void main()
{
	FILE* of = fopen("ellips.csv", "w");
	srand((unsigned int)time(NULL));

	 double x, y;
	for (int i = 0; i < 10000; i++) {
		x = getRand(0, 3.0);
		y = getRand(0, 1.0);
		if (inElips(x, y))
			fprintf(of, "%f, %f\n", x, y);
	}
}
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//2016112096 박재용 심프 1/////////////////////////////////////////////////////////////////////////////////////////////
double getRand(const double min, const double max) {
	double temp = ((double)rand()) / (double)RAND_MAX;
	temp = min + (max - min)*temp;
	return temp;
}
bool inElips(const double x, const double y, ) {
	const double x_c = 0.5;
	const double y_c = 0.5;
	const double r_c = 1.0;
	
	return (x - x_c)*(x - x_c) + (y - y_c)* (y - y_c) - r_c*r_c;
}
void main()
{
	FILE* of = fopen("ellips.csv", "w");
	srand((unsigned int)time(NULL));

	 double x, y;
	for (int i = 0; i < 10000; i++) {
		x = getRand(0, 3.0);
		y = getRand(0, 1.0);
		if (inElips(x, y))
			fprintf(of, "%f, %f\n", x, y);
	}
}

	



