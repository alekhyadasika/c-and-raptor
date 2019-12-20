#include<stdio.h>
int main()
{
int n,sum=0,r;
scanf("%d",&n);
while(n!=0)
{
r=n%10;

if(r==8)
{
	sum=sum+2;

}
 else if(r==0||r==9||r==6||r==4)
{
	sum=sum+1;
}
n=n/10;
}
printf("%d",sum);
return 0;
}

