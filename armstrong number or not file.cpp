#include<stdio.h>
int main()
{
	int n,n1,r,s=0;
	printf("enter the three digit number");
	scanf("%d", &n);
	n1=n;
	while(n!=0)
	{
		r=n%10;
		s=s+(r*r*r);
		n=n/10;
	}
    {
    	if(n1==s)
    	printf("the given number is armstrong number");
    	else
    	printf("the given number is not armstrong number");
    	
	}
}

