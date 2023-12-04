#include<stdio.h>
main()
{
	int i,n,fac;
	
	printf("Enter Value N =");
	scanf("%d",&n);
	
	for(i=1,fac=1; i<=n; n--)
	{
		fac=fac*n;
	}
	printf("factorial of =%d",fac);
}