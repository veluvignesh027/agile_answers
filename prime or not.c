/* VIGNESHWARAN B
EMAIL: veluvignesh027@gmail.com*/
#include"stdio.h"
#include"conio.h"
// is prime or not.
int isPrime(int n)
{
    if (n == 2 || n == 3)
        return 1;
 
    if (n <= 1 || n % 2 == 0 || n % 3 == 0)
        return 0;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    }
 
    return 1;
}
int main()
{
	int n;
	printf("ENTER THE NUMBER : \n");
	scanf("%d",&n);
	if(n<0)
	{
		printf("Negative cannot be prime...");
		return 0;
	}
    isPrime(n) ? printf("PRIME NUMBER ! \n") : printf("NOT PRIME \n");
    return 0;
}
