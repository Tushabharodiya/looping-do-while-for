#include<stdio.h>
main()
{
	int i=1,n,fac=1;
	
	printf("Enter Value N =");
	scanf("%d",&n);
	
	do
	{
		fac=fac*n;
		n--;
	}while(i<=n);
	
	printf("factroal value = %d",fac);
}