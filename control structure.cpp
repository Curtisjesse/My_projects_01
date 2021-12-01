#include<stdio.h>
int main()
{
	int marks;
	printf("enter marks:");
	scanf("%d",&marks);
	if(marks<40)
	{
		printf("E");
	}
	else if(marks>=40 &&marks<50)
	{
		printf("D");
	}
	else if(marks>=50 &&marks<60)
	{
		printf("C");
	}
	else if(marks>=60 &&marks<70)
	{
		printf("B");
	}
	else if(marks>=70 &&marks<=100)
	{
		printf("A");
	}
	else
	{
		printf("invalid marks");
	}
	return 0;

}