#include<stdio.h>
int main()
{
	int n,rev=0,r,i=1,count=0;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;

	}
	while(i<=rev)
	{
	if(rev%i==0)
	{
			count=count+1;
			if (count==2)
			{
					printf("Yes");
			}
		i=i+1;	
	}
}
	return 0;
}
