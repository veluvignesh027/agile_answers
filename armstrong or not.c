/* VIGNESHWARAN B
EMAIL: veluvignesh027@gmail.com*/
//ARMSTRONG OR NOT
#include"stdio.h"
#include"conio.h"
#include "math.h"
int main() {
   int num, oNum, rem, n = 0;
   float res = 0.0;

   printf("Enter an integer: ");
   scanf("%d", &num);
   oNum = num;
   for (oNum = num; oNum != 0; ++n) {
       oNum /= 10;
   }

   for (oNum = num; oNum != 0;oNum /= 10) {
       rem = oNum % 10;
      res+= pow(rem, n);
   }
   if ((int)res == num)
    printf("%d is an Armstrong number.", num);
   else
    printf("%d is not an Armstrong number.", num);
   return 0;
}
