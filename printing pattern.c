/* VIGNESHWARAN B
EMAIL: veluvignesh027@gmail.com*/
// PRINTING PATTERN
#include"stdio.h"
#include"conio.h"
int main()
{

    int n;
    scanf("%d", &n);
    if(n<0)
    {
	printf("INVALID NUMBER");
	return 0;
	}
    int len = n*2 - 1;
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            int min = i < j ? i : j;
            min = min < len-i ? min : len-i-1;
            min = min < len-j-1 ? min : len-j-1;
            printf("%d ", n-min);
        }
        printf("\n");
    }
	return 0;
	}
  
