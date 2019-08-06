/************************************************************************/
/* Author:  Kim Janik							*/
/* CS133U:  Lab #9:  Star Fleet Enums					*/
/************************************************************************/

#include <stdio.h>

enum rank  { 
    Ensign=1,
    Lieutenant=2,
    Commander=3,
    Captain=4,
    ambassador=5
};


int main()
{
    enum rank myRank;

    // Query who is here
    printf("What is your rank?\n");
    scanf("%d", &myRank);

    // error checking here
    while ((myRank > 5) || (myRank < 1))
    {
    printf("Please try again. What is your rank?\n");
    scanf("%d", &myRank);
    } 


   // Switch here
   switch (myRank)
   {
   case Ensign:
   printf("Shut up, Wesley!\n");
   break;
   
   case Lieutenant:
   printf("whats up, Julian Bashir!\n");
   break;
   
   case Commander:
   printf("hey, Beverly Crusher!\n");
   break;
 
   case Captain:
   printf("Namaste, Jonathan Archer!\n");
   break;

   case ambassador:
   printf("Hola, sarek!\n");
   break;
	
    }


}








