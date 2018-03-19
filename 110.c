#include <stdio.h>
int main(void) 
{

int k,i,sum=0;
printf("enter the value......");
scanf("%d",&k);
for(i=1;i<=k;i++)
sum+=i;
printf("%d",sum);
return 0;
}
