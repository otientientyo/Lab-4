#include<stdio.h>
main(){
	printf(" HightEnd world Technical Bank");
	printf("\n Welcome to Smart ATM");
	printf("\n Please Check Your Bio password here ");
	char press;
	scanf("%c", &press);
	printf("\n Checking the Bio password complete");
	printf("\n Welcome Dr. Tien");
	printf("\n press anything at the screen");
	char press2;
	fflush(stdin);
	scanf("%c", &press2);
	printf("\nWaiting for a sec");
	printf("\nSystem is processing");
	int x;
	printf("\nPlease choice the option below:");
	printf("\nTo checking surplus:  press 1");
	printf("\nTo Transfer money: press 2");
	printf("\nTo recharge : press 3");
	
	scanf("%d", &x);
	if(x==1){ 
			printf("\n Name: Dr. Tien");
			printf("\n ID banking: 08888.8868.6688");
			printf("\n SurPlus: 1.577.689 USD");
			printf("\n Thanks for using the service");
	}
	else if (x==2){
			printf("\nID to tranfer:");
			int id;
			scanf("%d", &id);
			printf("Number of money to Tranfer: ");
			int m;
			scanf("%d", &m);
			printf("\nsystem is processing");
			printf("\n The id of tranfering is : HIDC5569VDG6886");
			printf("\n Your ofer is compelete");
			printf("\n Thanks for using the service");
			
	}
	else if (x==3){
			printf("\n Number of money to Tranfer:  ");
			int m2;
			scanf("%d", &m2);
			
			printf("\nsystem is processing");
			printf("\n The id of tranfering is : HIDC588569VD12546");
			printf("\n Your ofer is compelete");
			printf("\n Thanks for using the service");
			
	}
	else printf("Invalue ID: faild ");
			
	
}
