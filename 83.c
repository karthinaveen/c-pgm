#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
char st[50],st1[50],st2[50],s;
int i=0,j=0,k=0,l=0,m=0,a=0,b=0;
printf("\nEnter string:");
scanf("%s",st);
l=strlen(st);
while(i<(l/2))
{
    st1[j]=st[i];
    j++;
    i++;
}
m=(l/2)+1;
while(m<l)
{
    st2[k]=st[m];
    k++;
    m++;
}
s=st[l/2];
a=atoi(st1);
b=atoi(st2);
switch(s)
{
    case '+':printf("\n%d%c%d=%d",a,s,b,a+b);
             break;
    case '-':printf("\n%d%c%d=%d",a,s,b,a-b);
             break;
    case '*':printf("\n%d%c%d=%d",a,s,b,a*b);
             break;
    case '/':printf("\n%d%c%d=%d",a,s,b,a/b);
             break;
    case '%':printf("\n%d%c%d=%d",a,s,b,a%b);
             break;
    default :printf("\nTry agin");
             break;
            
}
}
