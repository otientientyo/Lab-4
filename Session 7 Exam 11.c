#include<stdio.h>
void main ()
	{
		int basic;
		printf("\n Please enter your basic: ");
		
		scanf("%d", &basic);
		switch (basic)
		{
			case 200:
				printf("\n Bonus is dollar %\n", 50);
					break;
					
			case 300:
				printf("\n Bonus is dollar %d\n ", 125);
				break;
				
			case 400:
				printf("\n Bonus is dollar %d\n", 140);
				break;
			
			default:
				printf("\n Invalid entry");
				break;
		}
	}
