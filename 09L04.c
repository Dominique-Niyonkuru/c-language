// Hour9, page149-150, 09L04.c : Using sin(), cos(), and tan() functions

#include<stdio.h>
#include<math.h>

int main()
{
	double x;

	x = 45.0;	// 45 degrees
	x *= 3.141593/180.0; // convert to radians
	printf("The sine of 45 is: %f.\n", sin(x));
	printf("The cosine of 45 is: %f.\n", cos(x));
	printf("The tangent of 45 is: %f.\n", tan(x));
	return 0;
}

