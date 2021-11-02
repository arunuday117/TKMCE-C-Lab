#include<stdio.h>
void sum(int ,int);
void main(){
	int a=100,b=50;
	sum(a,b);
}
void sum(int p,int q)
{
	int r;
	r=p+q;
	printf("Sum is %d",r);
}
