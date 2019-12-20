#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if(a>b && a>c)
{

	printf("%d",b*c);
}
else if(b>c)
{

	printf("%d",a*c);
}
else
{
	printf("%d",a*b);
}
return 0;
}
