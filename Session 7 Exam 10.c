#include<stdio.h>

main(){
	char ch;
	printf("\n Enter a lower cased alphabet (a-z):  ");
	scanf("%c", &ch);
	
	if(ch<'a'||ch>'a')
	printf("\nCharacter not a lower cased alphabet");
	else 
		switch (ch)
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				printf("\Character is a vowel ");
				break;
				
			case 'z' :
				printf("\nLast Alphabet (z) was entered ");
				break;
			defaut:
				printf("\nCharacter is a consonant");
				break;
		}
}
