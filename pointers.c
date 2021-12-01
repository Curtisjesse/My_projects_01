#include<stdio.h>
int main()
{
	int *p;
	int y=5;
	p=&y;
	printf("%p\t%p\t%p",p,&y,*p);
	return 0;
}