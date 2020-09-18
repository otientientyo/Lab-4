#include<stdio.h>
#include<conio.h>
	main(){
		int num1, num2, res;
		char op;
		num1=90;
		num2=33;
		op='-';
		system("cls");
		switch (op)
		{	 
		case '+':
		res = num1+num2;
			printf("\n The sum is %d", res);
			break;
		case '-':
			res = num1 - num2;
			printf("\nNumber after Subtraction: %d", res);
			break;
		case '/':
			res = num1/num2;
			printf("\n Number after  Division: %d ", res);
			break;
		case '*':
			res = num1*num2;
			printf("\n Number after multiplication: %d", res);
			break;
		default:
			printf("\n Invalid");
			break;
		}
	}
