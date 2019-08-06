/****************************************************************************************************************/
/* Lab 2: Use a cide debugger to find the error  								*/
/*	in the following code. This code calculates the area of	a traiangle.					*/
/*														*/
/****************************************************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
	int a,b,c;
	float s,area;

	printf("enter size of each sides of triangle:\n");
	scanf("%d%d%d",&a,&b,&c);
	
	s = (a+b+c)/2;
	area = sqrt(s*(s-a)*(s-b)*(s+c));

	printf("area of triangle is: %.3f",area);

}
