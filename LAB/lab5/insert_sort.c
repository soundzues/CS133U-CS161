/************************************************************************/
/* Author:  Kim Janik							*/
/* Adapted from: 							*/
/* http://www.c4learn.com/c-programs/					*/
/*  program-to-implement-insertion-sort-in-c-programming.html		*/
/************************************************************************/

#include <stdio.h>
 
int main()
{
    FILE *datafile;
    char filename[20];
    int array[10000] = {0};
    int i = 0;
    int count = 0;
    int c, k, j, temp;
 
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
    for (k = 1; k < count; k++) {
       temp = array[k];
       j = k - 1;
       while ((temp < array[j]) && (j >= 0)) {
          array[j + 1] = array[j];
          j = j - 1;
       }
       array[j + 1] = temp;
    }
 
    printf("Sorted list in ascending order:\n");
    for ( c = 0 ; c < count ; c++ )
       printf("%d\n", array[c]);
 
    return 0;
}
