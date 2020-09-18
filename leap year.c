#include<stDio.h>

void main(){
		int y;
		printf("\nPlease enter a year:  ");
		scanf("%d", &y);
		if (y%4==0 && y%100!=0 || y%400==0) printf("\n %d is leap year", y);
				
}
