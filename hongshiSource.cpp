///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//2016112096 박재용 심프 1 원////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>
#include<math.h>
double getRand(const double min, const double max)
{
	double temp = (double)rand() / (double)RAND_MAX;
	temp = min + (max - min)*temp;
	return temp;
}
bool incircle(const double x, const double y ) 
{
	double x_c = 0.5;
	double y_c = 0.5;
	double r_c = 0.5;

	return pow(x - x_c, 2) + pow(y - y_c, 2) - pow(r_c, 2);
}
void main()
{
	FILE* of = fopen("circle.txt", "w");
	srand((unsigned int)time(NULL));


	for (int i = 0; i < 10000; i++) {
		double x = getRand(0, 1.0);
		double y = getRand(0, 1.0);
		if (incircle(x, y))
			fprintf(of, "%f, %f\n", x, y);
	}
}



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//2016112096 박재용 심프 2 덤벨//////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>
#include<math.h>
double getRand(const double min, const double max) 
{
	double temp = (double)rand() / (double)RAND_MAX;

	temp = min + (max - min)*temp;

	return temp;
}


bool incircle(const double x, const double y )
{
	const double x_c = 0.5; const double y_c = 0.5; const double r_c = 0.5;
		return pow(x - x_c, 2) + pow(y - y_c, 2) - pow(r_c, 2);
}
bool inrec(const double x, const double y)
{
	const double x_c = 1.5;
		const double y_c = 0.5;
		const double w_c = 3.0;
		const double h_c = 0.5;
	return ( x<x_c + 0.7*w_c && x>x_c - 0.7*w_c && y<y_c + 0.7*h_c && y>y_c - 0.7*h_c);
}
bool inCircle(const double x, const double y)
{
	const double x_c = 0.5; 
	const double y_c = 0.5; 
	const double r_c = 0.5;
	return pow(x - x_c, 2) + pow(y - y_c, 2) - pow(r_c, 2);
}
void main() {
	FILE* of = fopen("dumbbell.txt", "w");
	srand((unsigned int)time(NULL));

	 
	for (int i = 0; i < 10000; i++) 
	{
	double x = getRand(0, 1.0);
	double	y = getRand(0, 1.0);
		if (incircle(x, y) || inCircle(x, y, 2.5) || inrec(x, y))
			fprintf(of, "%f, %f\n", x, y);
	}

	
}
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//2016112096 박재용 심프 3 타원//////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

	double getRand(const double min, const double max) 
	{
	double temp = ((double)rand()) / (double)RAND_MAX;
	temp = min + (max - min)*temp;
	return temp;
}
bool inElips(const double x, const double y,)
{
	const double x_c = 1.0;
	const double y_c = 0.5; 
	const double a = 1.0; 
	const double b = 0.5;
	return pow(b,2)*pow(x - x_c,2) + pow(a,2)*pow(y - y_c,2) < pow(a,2)*pow(b,2);
}
void main()
{
	FILE* of = fopen("ellips.txt", "w");
	srand((unsigned int)time(NULL));

	for (int i = 0; i < 10000; i++) {
		double x = getRand(0, 3.0);
		double y = getRand(0, 1.0);
		if (inElips(x, y))
			fprintf(of, "%f, %f\n", x, y);
	}
}
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

