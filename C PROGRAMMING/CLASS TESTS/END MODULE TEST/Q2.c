#include <stdio.h>

void main()
{
	int i,n;
	long long int num=1;
	
	printf("Enter n:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%lld",num);
		
		if(i != n)
		{
			printf("+");
		}
		num=num*10+1;
	}
	printf("\n");
}