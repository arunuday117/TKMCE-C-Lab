#include<stdio.h>
// Program to study 2 d

void main()
{
	int i,j,p,q,sum=0;
	printf("Enter the row and column size of array\n");
	scanf("%d%d",&p,&q);
	int a[p][q];
	printf("Enter the array elements\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			sum=sum+a[i][j];
		}
	}
	printf("Sum of elements is %d",sum);

}
