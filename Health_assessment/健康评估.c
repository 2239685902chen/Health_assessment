#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	double q = 0, w = 0, e = 0, r = 0;
	scanf("%lf%lf", &q, &w);
	e = pow(w, 2);
	r = q / e;
	if (r >= 18.5 && r <= 23.9)
	{
		printf("Normal\n");
	}
	else
	{
		printf("Abnormal\n");
	}
	return 0;
}