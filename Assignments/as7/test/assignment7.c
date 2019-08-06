










#include<stdio.h>

int a[100];

int products(int *size)					/*function to read product number from the user and display the name of the product*/
{							/*intilizing a pointer size as a parameter*/
	int temp=0;             			/*to store product numbers temporarily*/
        int choice=0;           			/*to store users choice*/
        int input = 0;          			/*to store users input*/
        int t;                  			/*variable to print array elemts*/
        printf("enter 1 to shop \n");
        printf("enter 0 to exit shop \n");
        scanf("%d",&input);             		/*stores input 1 or 0*/

        if (input == 0) return 0;   			/*if the user inputs 0, the program ende*/

        do
        {
                printf("enter product numbers to buy products \n ");
                printf("enter 100 to buy Galaxy note -  700$  \n");
                printf("enter 101 to buy Fountain pen- - 50$  \n");
                printf("enter 102 to buy The singularity is near book 10$ \n" );
                printf("enter 103 to buy Apple watch - 250$ \n");
                printf("enter 104 to buy nexus 7 tablet - 100$ \n");


                printf("Please enter your product number:\n");
                scanf("%d",&temp);                       		/*stores product numbers in temp*/
                printf("do you want to enter this product in your shoping list (1/0) \n");
                scanf("%d",&choice);                            	/*stores user's choice 0 or 1*/
                if(choice==1)                                   	/*if the user enters 1, product numbers are stored in array*/
                {
                        a[*size]=temp;   			/*derefencing the size pointer to get stores product number in the pointer array from temp*/
			(*size)++;                                    	/*size increases by 1, points to the next  memory location*/
                }
                else if(choice == 0 )                               /*if the user enters 0, the user is given choice if he wants to continue shoping or not*/
                {
                        printf("do you want to continue shoping? (1/0) \n");
                        scanf("%d",&input);                     /*stores new value for input, if user enters 0 the flow comes out of the do while loop*/
                }
        } while (input==1 );                                   		        /*control statement for do while loop*/

        printf("your products are: \n");	
        for(t=0;t<*size;t++)                     	             	        /*itrates t, used to get the values stored in pointer  array a[*size]*/
        {
                if(a[t]==100)                                       	        /*if the value stored in pointer array is 100 prints Mobile*/
                {
                        printf("Galaxy S7 \n ");

                }
                else if(a[t]==101)                              		/*if the value stored in pointer array is 101 prints Fountain pen*/
                {
                         printf("Fountain pen\n ");

                }
                else if(a[t]==102)                                      	/*if the value pointer stored in array is 102 prints book*/
                {
                        printf("The singularity is near book\n " );
                }	
                else if(a[t]==103)                            		  	/*if the value stored in pointer array is 103 prints Apple watch*/
                {
	                printf("Apple watch\n ");

                }
                else if(a[t]==104)
                {                                     			  	/*if the value stored pointer in array is 104 prints nexus 7*/
                        printf("nexus 7 tablet\n ");
                }
                else
                {
                printf("invalid input \n ");
                }
        }

        return 0;
}


int checkout(int *size) 					/*function to check out and display the total*/
{
		int i;
		int wish;
		int pricesum=0;
                for(i=0;i<*size;i++)                             /*itrates i, used to get the values stored in pointer array*/
        {
                if(a[i]==100)                                   /*if the value stored in array is 100*/
                {
                       a[i]=700;				/*assigns 700 to the value in array holding 100*/
		       pricesum += a[i];			/*running sum*/

                }
                else if(a[i]==101)                              /*if the value stored in array is 101*/
                {
                       a[i]=50;					/*assigns 50 to the value in the array holding 101*/
			pricesum += a[i];			/*running sum*/

                }
                else if(a[i]==102)                              /*if the value stored in array is 102*/
                {
                       a[i]=10;					/*assigns 10 to the value in the array holding 102*/
			pricesum += a[i];									/*running sum*/
                }
                else if(a[i]==103)                              /*if the value stored in array is 103 */
                {
                        a[i]=250;                               /*assigns 250 to the value in array holding 103*/
			pricesum += a[i];									/*running sums*/

                }
                else if(a[i]==104)								/*if the value stored in array is 104*/
                {                                	        	/*assigns 100 to the value in the array*/
			a[i]=100;
			pricesum += a[i];			/*running sum*/
        }
} 
		printf("total price = %d \n",pricesum);
	printf("Do you want to buy more products? (1/0)");
	scanf("%d",&wish); 					/*reads and storer wish*/
	if (wish == 1)						/*to let the user continue purchasing if he wants to*/
	{
		products(size);					/*calling fucntion products, using size as parameters*/
	}
	else	
	{
		return 0;
	}	 

return 0;
}

int main(void) 							/*main function less than 10 lines*/
{
	int size = 0;						/*to make the code less confusing - pass by refeence */

	{
		products(&size); 			        /*calling function product(), parameters &size */
		checkout(&size);				/*calling function checkout(), parameters &size */
        }
	return 0;
}
	
