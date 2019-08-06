/*************************************************************************************************
/Author: Aditya Kothari
/Assignment: 4
/Code discription: Assign each product an unique product number and display it to the user
                   while they’re shopping.
                   Users purchase an item by entering the product number.
                   After each selection, store must confirm if the customer wants to add
                   the item to the cart.
                   Show the customer a list of their purchases at checkout.
/*************************************************************************************************/




#include<stdio.h>

int main(void)
{
	int a[100];		/*array of size 100 defined*/
	int i=0;		/*variable for array elements*/
	int temp=0;		/*to store product numbers temporarily*/
	int choice=0;		/*to store users choice*/
	int input = 0;		/*to store users input*/
	int t;			/*variable to print array elemts*/
	printf("enter 1 to shop \n");
	printf("enter 0 to exit shop \n");
	scanf("%d",&input);		/*stores input 1 or 0*/

	if (input == 0) return 0;	/*if the user inputs 0, the program ends*/

	do
	{
		printf("enter product numbers to buy products \n ");
	        printf("enter 100 to buy Mobile \n");
		printf("enter 101 to buy pen \n");
		printf("enter 102 to buy speaker \n" );
 		printf("enter 103 to buy book \n");
		printf("enter 104 to buy bulb \n");
 

 		printf("Please enter your product number:\n");
		scanf("%d",&temp);                     		/*stores product numbers in temp*/
		printf("do you want to enter this product in your shoping list (1/0) \n");
		scanf("%d",&choice);				/*stores user's choice 0 or 1*/
		if(choice==1)					/*if the user enters 1, product numbers are stored in array*/					
		{
			a[i]=temp;				/*stores product number in the array from temp*/
			i++;					/*i increases by 1, moves to the next  memory location*/
		}
		else if(choice == 0 ) 				/*if the user enters 0, the user is given choice if he wants to continue shoping or not*/
		{ 
			printf("do you want to continue shoping? (1/0) \n");
			scanf("%d",&input); 			/*stores new value for input, if user enters 0 the flow comes out of the do while loop*/
		}
	} while (input==1 );					/*control statement for do while loop*/
 
	printf(" your products are: \n");
	for(t=0;t<i;t++)					/*itrates t, used to remove the values stored in array a[i]*/
	{
		if(a[t]==100)					/*if the value stored in array is 100 prints Mobile*/
		{
			printf("Mobile \n");
		}
		else if(a[t]==101)				/*if the value stored in array is 101 prints Pen*/
		{	
			printf("Pen \n");
		}
		else if(a[t]==102)				/*if the value stored in array is 102 prints speakers*/
		{
			printf("Speaker \n");
		}
		else if(a[t]==103)			        /*if the value stored in array is 103 prints book*/
		{
			printf("Book \n");
		}
		else if(a[t]==104)                             /*if the value stored in array is 104 prints bulb*/
		{
			printf("bulb \n");
		}
		else
		{
			printf("invalid input");
		}
	}

	return 0;
}			
