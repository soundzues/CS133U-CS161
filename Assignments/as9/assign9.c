/***************************************************************************************************************************************/
// Author: Aditya Kothari
// Assignment: 9
// Description: Ask the customer if they are a new or returning customer.
//	 	For first time customers, your store needs to save their information in an
//		external file after checkout.
//	 	For returning customers, your store should read an external file and use
//		that information for checkout.
//************************************************************************************************************************************/


#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void info(char *f_name, char *l_name,char *mail, char *u_id) //function that accepts and stores user info as string
{

	printf("please enter your first name \n");
        scanf("%s",f_name);
        printf("please enter your last name \n");
        scanf("%s",l_name);
        printf("please enter your email id \n");
	scanf("%s",mail);
	printf("printf please enter your 4 digit credit card number as your unique user id \n");
	scanf("%s",u_id);
	printf("\n");
}

void disp(char *f_name, char *l_name, char *mail, char *u_id) // function that displays user inforamtion
{
        printf("Printing your contact information \n");
        printf("Name: %s \n",strcat( f_name, l_name) );          /*strcat used to combine first and last name and display as a string*/
        printf("E-mail: %s \n", mail);
	printf("your unique id is: %s \n", u_id);
}
void write(FILE *fp, char *f_name, char *l_name, char *mail,char *u_id) // function that writes information to the external file
{
	fp = fopen(strcat(u_id,".txt") , "w+");		//use unique id as a file name, create own file name
	fprintf(fp, "name: %s \n",strcat(f_name, l_name));
	fprintf(fp, "email id:  %s \n",mail); 
}

void read(FILE *fp, char *u_id, char buff) 			// to read inforamtion out of file
{
	char *cnct;
	cnct = malloc(256);
        
	printf(" please enter your unique id/ last 4 digits of your credit card number \n");
	scanf("%s",u_id);
        cnct = strcat(u_id,".txt");
	printf("%s \n",cnct);
	
	fp = fopen(cnct, "r");
	printf("printing your contact info \n");

	if (fp) {
	printf("in function read\n");
   	while ((buff = getc(fp)) != EOF)
	{
   	   putchar(buff);
	}
	fclose(fp);
	}
	else
	{
	printf("File Does not Exist \n");
	}	
}

int main()
{
	FILE *fp;			/*creatingg gile fp*/
	int cstmr;
	char *f_name;                   /*intilizing caharacter pointer*/
	char *l_name;                   /*intilizing caharacter pointer*/
	char *mail;                     /*intilizing caharacter pointer*/
	int conf;
	char *u_id;			// initilizing character pointer
	char  buff;			

	

	f_name = malloc(256);           /*allocates 256bits of memory to pointer*/
	l_name = malloc(256);           /*allocates 256bits of memory to pointer*/
	mail   = malloc(256);
	u_id   = malloc(256);

	printf("Have you visited the shop before? \n");
	printf("press 1 if yes \n");
	printf("press 0 if no \n");
	scanf("%d",&cstmr );
	
	if(cstmr == 1 )	//if its a old cusomer displays its information
	{
		printf("welcome back to the shop \n");
		read(fp, u_id, buff );

	}
	else if(cstmr == 0)// if its a new customer stores, displays and confirms the inforamtion
	{
		printf("Welcome to he shop\n");
		printf("pleae proivde us with your contact information \n");
		do
		{
			info(f_name, l_name, mail, u_id );
			disp(f_name, l_name, mail, u_id );
			printf("\n");
			printf(" is the information provided correct (1/0)\n ");
			scanf("%d",&conf);
		}while (conf == 0);
	write(fp, f_name, l_name, mail, u_id );
	printf(" unique file created \n");
	printf("please use the unique id when you re enter the shop \n");
	}

	return 0;
}		
