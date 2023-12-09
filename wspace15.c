#include<stdio.h>
main()
{
	int i,j,s;
	for(i='E';i>='A';i--)
	{
		for(s=i;s<='D';s++)
		{
			printf("  ");
		}
		for(j='A';j<=i;j++)
		{
			printf("%c ",j);	
		}
		printf("\n");
	}
}