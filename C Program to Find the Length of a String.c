//Calculate Length of String without Using strlen() Function

#include<stdio.h>
int main()
{
 char s[]="Programming is fun";
 int i;
 
 for(i = 0; s[i] != '\0'; ++i);
 
 printf("Length of the string: %d", i);
 return 0;
}

//Output
Length of the string: 18
