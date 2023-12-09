#include<stdio.h>
main()
{
	int i,j,s;
	for(i='A';i<='E';i++)
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