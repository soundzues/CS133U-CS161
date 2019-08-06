#include<stdio.h>
#include<string.h>


int main()
{


	char *f_name;                   /*intilizing caharacter pointer*/
        char *l_name;                   /*intilizing caharacter pointer*/
        char *mail;                     /*intilizing caharacter pointer*/
        int  userid;                   /*intilizing caharacter pointer*/

        f_name = malloc(256);           /*allocates 256bits of memory to pointer*/
        l_name = malloc(256);           /*allocates 256bits of memory to pointer*/
        mail   = malloc(256);           /*allocates 256bits of memory to pointer*/


        printf("please enter your first name \n");
        scanf("%s",f_name);
        printf("please enter your last name \n");
        scanf("%s",l_name);
        printf("please enter your email id \n");
        scanf("%s", mail);
	printf("please enter your birthdate in ddmmyyyy format \n");
	scanf("%d",&userid);
        printf("\n");

        printf("Printing your contact information \n");
        printf("Name: %s \n ",strcat(f_name, l_name));          /*strcat used to combine first and last name and display as a string*/
        printf("E-mail: %s \n",mail);
        printf("user id : %d \n",userid);
        printf("\n");
	return 0;

}
