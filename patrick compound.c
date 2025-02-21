/*
STUDENT NAME: MUTINDA PATRICK
ADMISSION NO: D33-0197-2022
*/
//programing
#include<stdio.h>
#include <math.h>
int main(){
 double principal, rate, time,compound_interest,total_amount;
 int n;
 printf ("program to calculate compond_interest:\n");
 printf ("Enter principal amount:\n");
 scanf("%lf", & principal);
 printf ("Enter rate of interest:\n");
 scanf ("%lf", & rate);
 printf ("Enter time in years:\n");
 scanf ("%lf",& time);
 printf("Enter number of times  interest is compounded:\n");
 scanf ("%d", & n);
 rate= rate/100;
 total_amount = principal * pow((1+rate/n),(n*time));
 compound_interest = total_amount - principal;
 printf ("The total amount is %.2f",total_amount);
 printf ("The compond interest is %.2f",compound_interest);
 return 0;
}