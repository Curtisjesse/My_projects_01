#include<stdio.h>
void
for(int i=1;i<=10;++i)
{
	printf("%d \t\t %d",i,i*10);
}
int AddNumber(int x,int y,int z)
{
	int sum;
	sum=x+y+z;
	return sum;
}
int main()
{
	printf("sum is %d",AddNumber(4,5,6));
	return 0;
}