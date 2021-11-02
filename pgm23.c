#include<stdio.h>
// Program to find sum of odd and even array values

void main()
{
	int i,n,sum=0,odd=0,even=0;
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
	printf("Sum is %d\n",sum);
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			even=even+a[i];
		}
		else
		{
			odd=odd+a[i];
		}
	}
	printf("\nSum of even values is %d",even);
	printf("\nSum of odd values is %d",odd);

}
