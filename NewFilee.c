#include<stdio.h>
int main()
{
	int num1, num2;
	printf("type two integers:");
	scanf("%d%d",& num1,&num2);
	if(num1==num2)
	{
		printf("answer%d=%d",num1,num2);
	}
	else if(num1>num2)
	{
		printf("answer %d>%d",num1,num2);
	}
	
}