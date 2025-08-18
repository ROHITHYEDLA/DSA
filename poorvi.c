#include<stdio.h>
main()
{
	int a[2][2]={{11,22},{33,44}};
	int i,j;
	printf("array is....\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
	{
		printf("%3d",a[i][j]);
	}
	printf("\n");
}
}
