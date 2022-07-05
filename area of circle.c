/* VIGNESHWARAN B
EMAIL: veluvignesh027@gmail.com*/
// AREA OF CIRCLE
#include"stdio.h"
#include"conio.h"
#define PI 3.14159265
int main()
{

    float r;
    printf("Enter Radius of circle : \n");
    scanf("%f", &r);
  
    float area;
    if(r>=0){
    area=PI*r*r;
    printf("AREA OF CIRCLE OF RADIUS : %f IS = %0.3f\t squre units.",r,area);
}
else
{
    	printf("Radius should be positive and numeric !!!");
    	return 0;
}
	return 0;
	}
