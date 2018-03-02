#include<stdio.h>
#include<conio.h>
int main(void)
{
int num,i,flag=0;
scanf("%d",&num);
printf("enter the number");
for(i=2;i<=num/2;i++)
{
if(num%i==0)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("\n prime");
}
else
{
printf("\n not a prime number");
}
return 0;
}


