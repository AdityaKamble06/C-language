//C Program to Multiply Two Floating-Point Numbers//

#include<stdio.h>
int main()
{
 double a,b,product;
 printf("Enter two numbers: ");
 scanf("%lf %lf",&a,&b);
 
 //Calculating product
 product=a*b;
 
 //%.2lf displays number up to 2 decimal point
 printf("Product = %.2lf",product);
 
 return 0;
}

//Output
Enter two numbers: 2
3.5
Product = 7.00
