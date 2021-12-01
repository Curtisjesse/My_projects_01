#include<stdio.h>
int main()
{
	int marks;
	printf("enter the students marks\n");
	scanf("%d",&marks);
	if(marks>=40&&marks<=100)
	{
		printf("passed");
	}
	else
	{
		printf("failed");
	}
	return 0;
}