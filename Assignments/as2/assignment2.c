/**************************************************************************************/
/*Author: Aditya.Kothari                                                             */
/*Assignment #2                                                             	     */	
/*Description: - read 2 values from the user					     
	       - add both the values to create a subtotal
	       - calculate 7.25% sales tax on subtotal, and add it to subtotal.
	       - calculate 10% ealy bird discount, and subtract it from subtotal.
	       - display the final subtotal.	
**************************************************************************************/

#include <stdio.h>


int main(void)
{
	float f;	/*reads and stores the first value*/
	float g;	/*reads and stores the second value*/						
	float t;	/*stores the total*/
	float st;	/*calcluates the sales tax*/
	float e;	/*calculates the early bird discount*/

	printf("Please enter the price of the smart watch\n");		/*displays message*/
	scanf("%f",&f);							/*reads the first value*/

	printf("Please enter the price of the books \n");		/*displays message*/
	scanf("%f",&g);							/*reads the second value*/

	t=f+g;								/*calculates the total of first and second value*/
	printf("Total price of your smart watch + book =$%.2f\n",t);	/*displays total*/

	st=0.0725*t;							/*calculates sales tax (7.25%=7.25/100=0.0725)*/
	t=st+t;								/*adds sales tax to the total*/
	printf("Total + added 7.25 perecent sales tax:\n"); 		/*displays message*/
	printf("New price = $%.2f\n",t); 				/*displays the new total*/

	e=0.10*t;									/*calculates early bird discoumt (10%=10/100=0.10)*/
	e=-e;										/*assigning e unary minus*/
	t=t+e;										/*used unary minus to subtract early bird discount from total*/
	printf("Final price after giving 10 perecent early bird discount:\n");		/*displays message*/
	printf("Final price = $%.2f\n",t);						/*displays final price the user needs to pay*/

	return 1;
}
