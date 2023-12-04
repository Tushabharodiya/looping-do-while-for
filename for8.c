#include<stdio.h>
main()
{
	int i,n,sum;
	
	printf("Enter Value N = ");
	scanf("%d",&n);
	
	for(i=1,sum=0; i<=n; i++)
	{
		sum=sum+i;
	}
	printf("sum of 1 to 10 =%d",sum);
}