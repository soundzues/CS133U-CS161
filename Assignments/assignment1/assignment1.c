#include <stdio.h>
int main(void) /* program that greets the customer, accepts his coupon number and displays it.*/
{
int i; /*variable i is used to store the coupon number*/ 
printf("hello MR.Adi, welcome to our store \n"); /*displays message, "hello Mr.Adi, welcome to our store"*/
printf("We have lot of prducts that may intrest you like: \n"); /*displays message, "We have lot of products that may intrest you like:"*/
printf("Phones, Watches, Pens, books and tablets \n"); /*displays message,"Phones, Watches, Pens, books and tablets"*/
printf("Please enter your coupon number: \n"); /*displays message, "pleae enter your coupon number:";*/
scanf("%d", &i); /*reads and stores the coupon number*/
printf("your coupon number is: %d\n", i); /*displays users coupon number*/
return 0;
}
