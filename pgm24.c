#include<stdio.h>
// Program to find biggest of array values

void main()
{
	int i,n,big=0,small;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	small=a[0];
	for(i=0;i<n;i++)
	{

		if(a[i]>big)
		{
			big=a[i];
		}
		if(a[i]<small)
		{
			small=a[i];
		}
	}
	printf("\nBiggest of array values is %d",big);
	printf("\nSmallest of array values is %d",small);

}
