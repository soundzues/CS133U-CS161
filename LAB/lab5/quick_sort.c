/************************************************************************/
/* Author:  Kim Janik							*/
/* Adapted from: 							*/
/* http://www.cquestions.com/2008/01/c-program-for-quick-sort.html	*/
/************************************************************************/

#include<stdio.h>

void quicksort(int [10000],int,int);

int main(){
    int x[20],i;
    FILE *datafile;
    char filename[20];
    int array[10000] = {0};
    //int i = 0;
    int count = 0;
    //int n, c, d, swap;

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

    quicksort(array,0,count-1);

    printf("Sorted elements:\n");
    for(i=0;i<count;i++)
      printf("%d\n",array[i]);

    return 0;
}

void quicksort(int x[10000],int first,int last){
    int pivot,j,temp,i;

     if(first<last){
         pivot=first;
         i=first;
         j=last;

         while(i<j){
             while(x[i]<=x[pivot]&&i<last)
                 i++;
             while(x[j]>x[pivot])
                 j--;
             if(i<j){
                 temp=x[i];
                  x[i]=x[j];
                  x[j]=temp;
             }
         }

         temp=x[pivot];
         x[pivot]=x[j];
         x[j]=temp;
         quicksort(x,first,j-1);
         quicksort(x,j+1,last);

    }
}
