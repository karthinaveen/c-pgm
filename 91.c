#include<stdio.h>
#include<conio.h>
void main()
{
int l,w,h,sa,vol;
printf("enter l,w,h:");
scanf("%d%d%d",&l,&w,&h);
vol=l*w*h;
sa=(2*l*w)+(2*l*h)+(2*h*w);
printf("surface area of cuboid = %d",sa);
printf("\nvolume of cuboid = %d",vol);
}
