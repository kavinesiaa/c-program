#include<stdio.h>
main()
{
	printf(" choosean tem:\n1. burger\n2. pizza\n3. french fries\n4. popcorn");
	int choice=0;
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("you picked burger.");
			break;
		case 2:
			printf("you picked pizza");
			break;
		case3:
			printf("you picked french fries");
			break;
		case4:
			printf("you picked popcorn");
			break;
		default:printf("invalid choice");		
	}
}
