//Example 1: Program to Convert Decimal to Octal

#include<stdio.h>
#include<math.h>

//function prototype
int covertDecimalToOctal(int decimalNumber);

int main()
{
 int decimalNumber;
 printf("Enter a decimal number: ");
 scanf("%d", &decimalNumber);
 
 printf("%d in decimal = %d in octal", decimalNumber, covertDecimalToOctal(decimalNumber));
 
 return 0;
}

//function to convert decimalNumber to octal
int covertDecimalToOctal(int decimalNumber)
{
 int octalNumber = 0, i = 1;
 
 while(decimalNumber != 0)
 {
  octalNumber += (decimalNumber % 8) * i;
  decimalNumber /= 8;
  i *= 10;
 }
 
 return octalNumber;
}

//Output
Enter a decimal number: 78
78 in decimal = 116 in octal
--------------------------------------------------------------------------------------------------------------------------------
//Example 2: Program to Convert Octal to Decimal

#include<stdio.h>
#include<math.h>

//function prototype
long long convertOctalToDecimal(int octalNumber);

int main()
{
 int octalNumber;
 
 printf("Enter an octal number: ");
 scanf("%d", &octalNumber);
 
 printf("%d in octal = %lld in decimal", octalNumber, convertOctalToDecimal(octalNumber));
 
 return 0;
}

//function to convert octalNumber to decimal
long long convertOctalToDecimal(int octalNumber)
{
 int decimalNumber = 0, i = 0;
 
 while(octalNumber != 0)
 {
  decimalNumber += (octalNumber % 10) * pow(8,i);
  ++i;
  octalNumber /= 10;
 }
 
 i = 1;
 
 return decimalNumber;
}

//Output
Enter an octal number: 116
116 in octal = 78 in decimal
