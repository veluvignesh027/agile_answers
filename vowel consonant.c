/* VIGNESHWARAN B
EMAIL: veluvignesh027@gmail.com*/
// VOWEL OR CONSONANT
#include"stdio.h"
#include"conio.h"
int main()
{
	char c;
	printf("ENTER THE CHARACTER : \n");
	scanf("%c",&c);
	if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
	{
		printf("THE CHARACTER IS VOWEL !");
		
	}
	else
	printf("\nIT IS CONSONANT..");
	return 0;
	}
