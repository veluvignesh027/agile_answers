/* VIGNESHWARAN B
EMAIL: veluvignesh027@gmail.com*/
// PRINTING NUM NAMES
#include"stdio.h"
#include"conio.h"
int main()
{
	int a,b;
	printf("ENTER THE INTERVALS: \n");
	scanf("%d %d",&a,&b);
	for(int i=a;i<=b;i++)
	{
		if(i<10 && i>=-9)
		{
			switch(i)
			{
					case 0:
					printf("Zero \n");
					break;
					case 1 || -1 :
					printf("One \n");
					break;
					case 2:
					printf("Two \n");
					break;
					case 3:
					printf("Three \n");
					break;
					case 4:
					printf("Four \n");
					break;
					case 5:
					printf("Five \n");
					break;
					case 6:
					printf("Six \n");
					break;
					case 7:
					printf("Seven \n");
					break;
					case 8:
					printf("Eight \n");
					break;
					case 9:
					printf("Nine \n");
					break;
					case -1 :
					printf("-One \n");
					break;
					case -2:
					printf("-Two \n");
					break;
					case -3:
					printf("-Three \n");
					break;
					case -4:
					printf("-Four \n");
					break;
					case -5:
					printf("-Five \n");
					break;
					case -6:
					printf("-Six \n");
					break;
					case -7:
					printf("-Seven \n");
					break;
					case -8:
					printf("-Eight \n");
					break;
					case -9:
					printf("-Nine \n");
					break;
}
			}
			else{
				if(i%2==0)
				{
					printf("EVEN \n");
				}
				else{
					printf("ODD \n");
				}
			}
		}
		return 0;
	}
