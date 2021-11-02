#include<stdio.h>
void main(){
	float l,b,area,perimeter;
	printf("Enter the length");
	scanf("%f",&l);
	printf("Enter the breadth");
	scanf("%f",&b);
	area=l*b;
	perimeter=2*(l+b);
	printf("Area of the triangle %f\n",area);
	printf("Perimeter of the triangle %f",perimeter);
}
