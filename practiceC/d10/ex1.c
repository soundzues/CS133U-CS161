#include<stdio.h>

int salestax(int a)
{
  return (a*0.15);
}

int main(void)
{
	int i;
	int sum;
	int a[5]={10,20,30,40,50};
	for(i = 0; i<5; i++)
	{
		sum += a[i];
        /*	printf("sum = %d \n",sum); */
	}
        printf("salestax = %d \n", salestax(sum));  	
}
