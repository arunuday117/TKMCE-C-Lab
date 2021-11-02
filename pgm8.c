#include<stdio.h>
void main(){
	int a,b;
	printf("Enter two numbers");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("Largest is a");
	}
	else if(a<b)
	{
		printf("Largest is b");
	}
	else
	{
		printf("a and b are equal");
	}
}
