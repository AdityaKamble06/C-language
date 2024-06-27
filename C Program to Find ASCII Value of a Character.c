//C Program to Find ASCII Value of a Character//

#include<stdio.h>
int main()
{
 char c;
 printf("Enter a character: ");
 scanf("%c",&c);
 
 //%d displays the integer value of a character
 //%c displays the actual character
 printf("AASCII value of %c=%d",c,c);
 
 return 0;
}

//Output
Enter a character: R
AASCII value of R=82
