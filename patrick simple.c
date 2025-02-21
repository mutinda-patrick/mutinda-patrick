/*
STUDENT NAME: MUTINDA PATRICK
ADMISSION NO: D33-0197-2022
*/
//programing
#include<stdio.h>//printf(),scanf()
int main(){
 int principal;
 int rate;
 int time;
 int simple_interest;
printf("program to calculate simple interest: \n") ;
printf("Enter principal amount:\n");
scanf("%d", &principal);
printf("Enter rate:\n");
scanf("%d",&rate);
printf ("Enter time:\n");
scanf ("%d",&time);
simple_interest=(principal*rate*time)/100;
printf("simple interest is %d",simple_interest);
return 0;
}