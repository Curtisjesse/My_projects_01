#include<stdio.h>
int main()
{
	int i=0;
	do
	{
		printf("%d\t%d\n",i,i*10);
		++i;
	}
	while(i<=10);
}