#include<stdio.h>
// Program to study arrays

void main()
{
	int i,n;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array Values\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}

}
