/************************************************************************/
/* Author:  Kim Janik							*/
/* CS133U:  Lab #8:  Library Functions					*/
/************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h> // new library function

int main()
{
    int input;
    float output;
    char cmd[] = "date";
    char cmd2[]= "ls";
    time_t cur_time;

    // Time Section
//    printf("The time is now %ld\n", time(NULL));
    time(&cur_time);
    printf("Nicely:\n %s\n", ctime(&cur_time) );	

    // System Section
 /*   printf("Now running a Linux command inside of this program:\n");
    system(cmd);
    system(cmd2);

    // Rand Section
    srand(time(NULL));
    printf("Truly random number = %d\n", rand()); 
    printf("Random number = %d\n", rand());
    printf("Random number = %d\n", rand());
    printf("Random number = %d\n", rand());
    printf("Random number = %d\n", rand());

    // Cos Section
    printf("How would you like to vary sin (enter any non-zero number)?");
    scanf("%d", &input);
    output = cosf(M_PI / input);
    printf("PI / %d = %f\n", input, output);

    // Limits section - displays memory occupied by the various data types. 
    printf("The number of bits in a byte %d \n", CHAR_BIT);
    printf("The minimum value of integer data type = %d \n", INT_MIN);
    printf("The maximum value of integer data type = %d \n", INT_MAX); */

return 0;

	
}
