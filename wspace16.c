#include<stdio.h>
main()
{
	int i,j,s;
	for(i='A';i>='E';i--)
	{
		for(s=1;s<=i;s++)
		{
			printf("  ");
		}
		for(j=1;j>=i;j--)
		{
			printf("%d ",j);	
		}
		printf("\n");
	}
	
}