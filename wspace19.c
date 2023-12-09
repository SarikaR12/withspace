#include<stdio.h>
main()
{
	int i,j,s,ch='A';
	
	for(i=5;i>=1;i--)
	{
		for(s=1;s<=i;s++)
		{
			printf("");
		}
		for(j=1;j<=i;j++)
		{
			if((i-j)%2==1)
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
