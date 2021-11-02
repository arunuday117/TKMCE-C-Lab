#include<stdio.h>
// Program to find sum of array values

void main()
{
	int i,n,sum=0;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Sum of array Values\n");
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("Sum is %d",sum);

}
