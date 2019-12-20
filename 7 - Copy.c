#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
 int i;
 while(n>0)
 {
 	i=n%10;
 	printf("%d" " ",i);
 	n=n/10;
 	
 }
return 0;
}
