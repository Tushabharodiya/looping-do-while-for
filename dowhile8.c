#include<stdio.h>
main()
{
	int i=1,n,sum=0;
	
	printf("Enter Value N =");
	scanf("%d",&n);
	
	do
	{
		sum=sum+i;
		i++;
	}while(i<=n);
	printf("sum of 1 to n = %d",sum);
}