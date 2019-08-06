/*******************************************************************************************************************************
/Author: Aditya Kothari
/Assignment: 8
/Description: Let the customer their name, mailing address and phone number
/	      Print out the customer information and confirm it is correct
	      The customer’s name and mailing address must be stored as strings.	     	
/
******************************************************************************************************************************/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char *f_name; 			/*intilizing caharacter pointer*/
	char *l_name; 			/*intilizing caharacter pointer*/
	char *mail;			/*intilizing caharacter pointer*/
        char *number;			/*intilizing caharacter pointer*/
	int input;
	int check;

	f_name = malloc(256);		/*allocates 256bits of memory to pointer*/
	l_name = malloc(256); 		/*allocates 256bits of memory to pointer*/
	mail   = malloc(256);		/*allocates 256bits of memory to pointer*/
	number = malloc(256);		/*allocates 256bits of memory to pointer*/

	
	printf("do you want promtional material? \n");
	printf("if yes press 1 \n");
	printf("if no press 0 \n");
	scanf("%d",&input);		/*reads input*/

	if(input == 0) return 0; 	/*if the user enters 0 the program exits*/
	
	while(input == 1) 		/*if the user enters 1, program will store and display users contact information*/
	{ 
	printf("please enter your first name \n");
	scanf("%s",f_name);
	printf("please enter your last name \n");
	scanf("%s",l_name);
	printf("please enter your email id \n");
	scanf("%s", mail);
	printf("please enter your mobile number \n");
	scanf("%s",number);
	printf("\n");
	
	printf("Printing your contact information \n");
	printf("Name: %s \n ",strcat(f_name, l_name));		/*strcat used to combine first and last name and display as a string*/
	printf("E-mail: %s \n",mail); 
	printf("phone number: %s \n",number);
	printf("\n");
	
	printf("press 1 to confirm  your contact information \n");
	printf("press 0 to re enter your contact information \n");
	scanf("%d",&check);					/*reads check*/
	if(check == 1)						/*if the user entes 1, the program exits*/
	{
		printf("bye \n");
		input = 0;
	}
	else if(check == 0)						/*if the user enters 0, the program lets the user re enter is contact info*/
	{
		printf("please re enter your inforamtion \n");
		input = 1;
	}

	}	
	
	return 0;
}
