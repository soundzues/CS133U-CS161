/********************************************************************************************************************8
*
*Author:- Aditya Kothari
*Assignment#3
*Descripton     - Create multiple menus fot the product - atleast have 3 items in a category
*		- Atleast one meny alows user to browse through sub category
*               - Atleast one item accesible through 2 different menus
*		- After each purchase customer can buy mre stuff
* 		- Use 3 different control structures
*********************************************************************************************************************/

#include  <stdio.h>

int main(void)

{

    int y;      /* stores the value for expression that will be used in switch*/
    int z;	/* sores the  value got expression that will be used ib if ifelse loop*/
    do		/* 1st control sturcture, to allow the customer to buy more stuff */
    {
     	printf("1. Fashion menu \n");               /*constant expression - case 1 */
        printf("2. Electronics menu \n");	    /*constant expression - case 2 */	
	printf("3. Sports menu \n");	            /*constant expression - case 3 */ 		
	printf("4. Toys menu \n");		    /*constant expression - case 4 */	
	printf("5. to Books menu \n");		    /*constant expression - case 5 */
	printf("6. Exit \n");			    /*constant expression - default case */	       
        printf("select one option \n");             /*displays messsage "select option"*/
	scanf("%d",&y);				    /*reads in value and stores in y*/	
   	                switch ( y )                /*switch (expresion)- 2nd control sturcture */
   		 	{
                	case 1:			    /*displays items in fashion menu*/	
   
   		    printf("differnet catagories are: \n ");      
                    printf("watches \n");
                    printf("mens clothing \n");
                    printf("womens clothing \n\n");
                    printf("if you want to acess MENS sub catagory press 1 \n");
	            printf("if you want to acess WOMENS sub catorgy pess 0 \n");
                    scanf("%d", &z);               /*reads in value and stores in z*/
                    if (z == 1)                    /*2nd control structure used to access mens and womens sub catagory*/ 
                    {                              /*displays items in mens sub catagory */
                    printf("shirts \n"); 
                    printf("jackets \n");
                    printf("jeans \n");
                    }
                    else if (z == 0)              /*displays items in women sub catagory*/
                    {
                    printf("skirts \n");
                    printf("heels \n");
                    printf("dresses \n");
                    }
                    break;
            case 2:                              /* displays itesm in Electronics menu*/
            
                    printf("differnet catagories are: \n");
                    printf("samsung smart T.V \n");
                    printf("ipad \n");
                    printf("iphone \n");
                    printf("google nexus 5 \n");
                    break;
            case 3:                              /* displays items in Sports menu */
            	
            	     printf("differnet catagories are: \n");
                     printf("golf stick \n");
                     printf("cricket bat \n");
                     printf("balls \n");         /*balls can be also be accessed from toys menu */
                     printf("football gear \n");
                     break;
             case 4: 				/*displays items in  toys menu*/
             	
          	     printf("differnet catagories are: \n");
                     printf("hot wheels car\n");
                     printf("barbie doll \n");
                     printf("lego brainstorm \n");
                     printf("ball \n");		/*can be accessed from sports menu*/
                     break;
             case 5: 				/*displays items  books menu*/
           
                     printf("differnet catagories are: \n");
                     printf("The selfish gene by Richard Dawkins \n");
                     printf("The singularity is near by Ray Kurzweil \n");
                     printf("Pale blue dot by Carl Sagan \n");
                     printf("How to win friends and influnce people by Dale Carnegie \n");
                     break;
            default:				/* default case: if the user presses 6, message displayed "Exit"*/
             		 printf("Exit \n");
             		 break;
				}
				
    }
    while (y != 6);				/* As long as the user dosent press 6, the code will allow the user to buy more products*/
    return 0;
}
