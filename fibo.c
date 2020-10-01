#include<stdio.h>
void main()
{
int i,n,a=0,b=1,t;
scanf("%d",&n);


for(i=0;i<n;i++)
{
	if(i<=1)
		t=i;
	else
{
	t=a+b;
	a=b;
	b=t;

	}
printf("%d \n",t);

}
}