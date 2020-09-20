#include<stdio.h>
main(){
	char c;
	printf("Please enter character: ");
	scanf("%c", &c);
	
	if(c>='A'&&c<='Z')
	printf("Lowercase character = %c", c+'a'-'A');
	else
	printf("Character Enterd is = %c", c);
}
