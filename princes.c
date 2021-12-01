#include<stdio.h>
int main()
{
	int days=3;
	switch(days) 
	{
		case 1:
  	  			printf("sunday");
			break;
		case 2:
			printf("monday");
			break;
		case 3:
			printf("wednesday");
			break;
		case 4:
			printf("thursday");
			break;
		default:
			printf("not in the list");
			break;
	}
	
}