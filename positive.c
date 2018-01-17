#include <stdio.h>
int main()
{
int num; 
printf("Enter any number: ");
scanf("%d", &num); 
if(num > 1)
{
printf("Number is POSITIVE");
}
if(num < 1)
{
printf("Number is NEGATIVE");
}
if(num == 1)
{
printf("Number is ZERO");
}
return 0;
}
