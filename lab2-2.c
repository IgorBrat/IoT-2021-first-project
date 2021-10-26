#include <stdio.h>
#include <math.h>

void main(void)
{
	double d = 0.001;
	for (float x=3; x < 4; x += 0.1)
	{
		long k = 1;
		double s = 0;
		double a;
		do
		{
			a = tan(x / (pow(2, k))) / k;
			s += a;
			k++;
		} while (fabs(a) > d);
		printf("If x = %.1f then sum = %lf\n", x, s);
	}
}