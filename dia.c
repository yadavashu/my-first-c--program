#include<stdio.h>
int main()
{
int i,n,j,k;
scanf("%d",&n);

for(i=1;i<=n;i+=2)
{printf("\n");
	for(j=1;j<=(n-i)/2;j++)
	printf(" ");
	for(k=1;k<=i;k++)
	printf("*");
	for(j=1;j<=(n-i)/2;j++)
		printf(" ");
}
for(i=(n-2);i>=1;i-=2)
{
	printf("\n");
	for(j=1;j<=(n-i)/2;j++)
		printf(" ");
	for(k=1;k<i;k++)
		printf("*");
	for(j=1;j<=(n-i)/2;j++)
		printf(" ");
}
}
	
	
	
	 
