#include<stdio.h>
#include<string.h>
// Program to study 2 d

struct stud
{
	int rlno;
	char name[10];
	int age;
	float phy;

};

void main()
{
	struct stud s1;
	printf("Enter the roll no\n");
	scanf("%d",&s1.rlno);
	printf("Enter name\n");
	scanf("%s",s1.name);
	printf("Enter your age\n");
	scanf("%d",&s1.age);
	printf("Enter physics mark\n");
	scanf("%f",&s1.phy);
	printf("Roll No : %d\nName : %s\nAge : %d\nMark of Physics : %f\n",s1.rlno,s1.name,s1.age,s1.phy);	

}
