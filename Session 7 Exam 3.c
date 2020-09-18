#include<stDio.h>

void main(){
		int num, res;
		printf("Enter a number: ");
		scanf("%d", &num);
		res = num%2;
		if (res==0)
			printf("The number Even");
		else
			printf("The number is Odd");
				
}
