/* VIGNESHWARAN B
EMAIL: veluvignesh027@gmail.com*/
//FRQUENCY OF DIGITS
#include"stdio.h"
#include"conio.h"
#include"string.h"
int rc(char,char*);

int main()
{
	char s[1000];
	printf("Enter the string : ");
	scanf("%s",s);
	for(int i=0;i<strlen(s);i++)
	{
		printf("%2d",rc(s[i],s));
	}
	return 0;
}
int rc(char a,char *s)
{
	int c=0;
	for(int i=0;i<strlen(s);i++)
	{
		if(a==s[i])
		{
			c++;
		}
	}
	return c;
}
