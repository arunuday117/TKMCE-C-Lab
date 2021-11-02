#include<stdio.h>
int sum(int ,int);
void main(){
	int a=100,b=50,c;
	c=sum(a,b);
	printf("Sum is %d",c);
}
int sum(int p,int q)
{
	int r;
	r=p+q;
	return (r);
}
