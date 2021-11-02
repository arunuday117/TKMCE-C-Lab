#include<stdio.h>
#include<string.h>

int calc(int ,int);

void main()
{
	int a,b;
	printf("Enter two values\n");
	scanf("%d%d",&a,&b);
	calc(a,b);
}

int calc(int p, int q)
{
	float d;
	char ch;
	printf("Enter the operator\n");
	scanf("%s",&ch);

	switch(ch)
	{
		case '+': d=p+q;
				printf("Sum is %f",d);
				break;
		case '-': d=p-q;
				printf("Difference is %f",d);
				break;
		case '*': d=p*q;
				printf("Product is %f",d);
				break;
		case '/': d=p/q;
				printf("Division is %f",d);
				break;
		case '%': d=p%q;
				printf("Remainder is %f",d);
				break;
		default: printf("Invalid operator");
	}
}


