//C Program to Compute Quotient and Remainder//

#include <stdio.h>
int main() 
{
 int dividend, divisor, quotient, remainder;
 printf("Enter dividend: ");
 scanf("%d", &dividend);
 printf("Enter divisor: ");
 scanf("%d", &divisor);

 // Computes quotient
 quotient = dividend / divisor;

 // Computes remainder
 remainder = dividend % divisor;

 printf("Quotient = %d\n", quotient);
 printf("Remainder = %d", remainder);
 return 0;
}

//Output
Enter dividend: 2
Enter divisor: 3
Quotient = 0
Remainder = 2
