#include<stdio.h>
#include<conio.h>
void main(){
	float com = 0, sales_amt;
	system("clsn");
	printf("Enter the Sale Amount: ");
	scanf("%f", &sales_amt);
	if (sales_amt >= 10000)
		com = sales_amt * 0.1;
		printf("\n Comission = %f", com);
}
