#include <stdio.h>
#include<conio.h>
int main(void) {
	int n,m,i,a[10],temp;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>a[i+1])
		{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
	}
	printf("%d",a[m-1]);
	return 0;
}
