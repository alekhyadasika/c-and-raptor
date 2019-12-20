#include<stdio.h>
int main()
{
int r,large=0;
int count=0;
long n;
scanf("%ld",&n);
while(count!=3)
{
	r=n%10;
	if(r>large)
	{
		large=r;
	}
n=n/10;
count++;
	}
	printf("%d",large);	

return 0;
}
