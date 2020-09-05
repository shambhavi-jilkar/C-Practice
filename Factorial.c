#include<stdio.h>
int fact(int);
void main()
{
	int n,fa,r=0;
	while(r==0)
	{
		printf("\nEnter a number\n");
		scanf("%d",&n);
		fa=fact(n);
		printf("\nFactorial is: %d\n",fa);
		printf("\nPress 0 to continue.\n");
		scanf("%d",&r);
	}
}

int fact(int a)
{
	if(a==1)
		return 1;
	else
		return a*fact(a-1);
}
