#include<stdio.h>
int main()
{
	char c;
	double n1,n2;
	printf("enter an operator(+,-:");
	scanf("%c",&c);
	printf("enter an operand:");
	scanf("%lf%lf",&n1,&n2);
	switch(c);
	{
		case '+'
			printf("%1lf+%1lf=%1lf",n1,n2,n1+n2);
			break;
		case '-'
			print("%1lf-%1lf=%1f",n1,n2,n1-n2);
			break;
	}
	default;
	
	
}