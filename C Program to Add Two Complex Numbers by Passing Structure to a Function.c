//Add Two Complex Numbers

#include <stdio.h>
typedef struct comple
{
 float real;
 float imag;
} complex;

complex add(complex n1, complex n2);

int main() 
{
 complex n1, n2, result;

 printf("For 1st complex number \n");
 printf("Enter the real and imaginary parts: ");
 scanf("%f %f", &n1.real, &n1.imag);
 printf("\nFor 2nd complex number \n");
 printf("Enter the real and imaginary parts: ");
 scanf("%f %f", &n2.real, &n2.imag);

 result = add(n1, n2);

 printf("Sum = %.1f + %.1fi", result.real, result.imag);
 return 0;
}

complex add(complex n1, complex n2) 
{
 complex temp;
 temp.real = n1.real + n2.real;
 temp.imag = n1.imag + n2.imag;
 return (temp);
}

//Output
For 1st complex number 
Enter the real and imaginary parts: 2.1
-2.3

For 2nd complex number 
Enter the real and imaginary parts: 5.6
23.2
Sum = 7.7 + 20.9i
