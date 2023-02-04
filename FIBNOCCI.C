#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,n,i;
	clrscr();
	printf("enter the limit: ");
	scanf("%d",&n);
	printf("\n the first %d fibnocci numbers are: ",n);
	for(a=1,b=0,i=0;i<n;i++)
	{
		c=a+b;
		printf("\n%d",c);
		a=b;
		b=c;
	}
	getch();
}