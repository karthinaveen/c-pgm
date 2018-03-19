#include<stdio.h>
#include<conio.c>
int main()
{
int i,min,c[10];
for(i=0;i<10;i++)
{
scanf("%d",&c[i]);
}
min=c[0];
for(i=0;i<10;i++)
{
if(c[i]<min)
{
min=c[i];
}

}
printf("%d",min);
return 0;
}

