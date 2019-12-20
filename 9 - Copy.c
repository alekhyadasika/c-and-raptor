#include<stdio.h>
int main()
{
long n;
int r,large=0,least=9;
scanf("%ld",&n);
while(n>0)
{
	r=n%10;
	if(r>large)
	{
		large=r;
	}
if(r<least)
{
	least=r;
}
n=n/10;
}
printf("<%d  %d>",least,large);

return 0;
}
