/****************************************************************/
/* Lab2: Use a debugger to find the error in the following */
/* code. THis code calculates the area of a triangle. */
/****************************************************************/
#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	float s,area;
	
	printf("Enter size of each sides of triangle:\n");
	
	scanf("%d%d%d",&a,&b,&c);
	
	s = (a+b+c)/2; /* Calculate 1/2 the triangle's perimeter*/
 
	area = sqrt(s*(s-a)*(s-b)*(s-c)); /*Heron's Formula*/
	
	printf("Area of triangle is: %.3f",area);
	printf("         ^  \n");
	printf("        / \\ \n");
	printf("       /   \\ \n");
	printf("      /     \\ \n");
	printf("     /       \\ \n");
	printf(" %d /         \\ %d \n", a, c);
	printf("   /           \\ \n");
	printf("  /             \\ \n");
	printf(" /               \\ \n");
        printf(" _________________ \n");
        printf(" %d \n", b);
        return 0;
}
