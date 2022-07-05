/* VIGNESHWARAN B
EMAIL: veluvignesh027@gmail.com*/
//REVERSE OF DIGITS
#include"stdio.h"
#include"conio.h"
#include"string.h"
int rc(char,char*);

int main()
{
	int n,rem,rev=0;
	printf("Enter the number : ");
	scanf("%d",&n);
	while (n != 0) {
    rem = n % 10;
    rev = rev * 10 + rem;
    n /= 10;
  }

  printf("Reversed number = %d", rev);

	return 0;
}
