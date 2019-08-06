/************************************************************************/
/* Author:  Kim Janik							*/
/* Adapted from: 							*/
/* http://www.programmingsimplified.com/c/source-code/c-program-bubble-sort */
/************************************************************************/

#include <stdio.h>
 
int main()
{
    FILE *datafile;
    char filename[20];
    int array[10000] = {0};
    int i = 0;
    int count = 0;
    int n, c, d, swap;
 
    // Ask for what file to open
    printf("What is the name of data file to read from?");
    scanf("%s", &filename);

    // Open the file, read in the numbers & close the file
    datafile = fopen(filename, "r");
    while(!feof(datafile)) {
        fscanf(datafile,"%d",&array[i]);
        //printf("%d\n", array[i]);		// Debug line
        i++;
        count++;
    }
    count--;		//Don't want the end-of-file number
    fclose(datafile);
 
    // Actual swapping portion
    for (c = 0 ; c < ( count - 1 ); c++) {
      for (d = 0 ; d < count - c - 1; d++) {
        if (array[d] > array[d+1])  {  /* For decreasing order use < */
          swap       = array[d];
          array[d]   = array[d+1];
          array[d+1] = swap;
        }
      }
    }
 
    printf("Sorted list in ascending order:\n");
    for ( c = 0 ; c < count ; c++ )
       printf("%d\n", array[c]);
 
    return 0;
}
