//Power of a Number Using the while Loop

#include<stdio.h>
int main()
{
 int base,exp;
 long double result = 1.0;
 printf("Enter a base number: ");
 scanf("%d",&base);
 printf("Enter an exponent: ");
 scanf("%d",&exp);
 
 while(exp != 0)
 {
  result *= base;
  --exp;
 }
 
 printf("Answer = %.0Lf",result);
 return 0;
}

//Output
Enter a base number: 3
Enter an exponent: 4
Answer = 81
--------------------------------------------------------------------------------------------------------------------------------
//Power Using pow() Function

#include <math.h>
#include <stdio.h>

int main() 
{
 double base, exp, result;
 printf("Enter a base number: ");
 scanf("%lf", &base);
 printf("Enter an exponent: ");
 scanf("%lf", &exp);

 // calculates the power
 result = pow(base, exp);

 printf("%.1lf^%.1lf = %.2lf", base, exp, result);
 return 0;
}

//Output
Enter a base number: 2
Enter an exponent: 45
2.0^45.0 = 35184372088832.00
