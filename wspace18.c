#include<stdio.h>
main()
{
	int i,j,s;
	
	for(i=1;i<=5;i++)
	{
		for(s=i;s>=1;s--)
		{
			printf("");
		}
		for(j=1;j<=i;j++)
		{
			if((i-1)%2==1)
			{
				printf("0");
			}
			else
			{
				printf("1");
			}
		}
		printf("\n");
	}
}
