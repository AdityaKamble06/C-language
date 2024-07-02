//Program to Print English Alphabets

#include<stdio.h>
int main()
{
 char c;
 for(c = 'A'; c <= 'Z'; ++c)
 {
  printf("%c ",c);
 }
 return 0;
}

//Output
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z 
--------------------------------------------------------------------------------------------------------------------
//Print Lowercase/Uppercase alphabets

#include<stdio.h>
int main()
{
 char c;
 printf("Enter u to display Uppercase Alphabets.\n");
 printf("Enter l to display Lowercase Alphabets.\n");
 scanf("%c",&c);
 
 if(c == 'U' || c == 'u')
 {
  for(c = 'A';c <= 'Z'; ++c)
  {
   printf("%c ",c);
  }
 }
 else if(c == 'L' || c == 'l')
 {
  for(c = 'a';c <= 'z'; ++c)
  {
  printf("%c ",c);
  }
 }
 else
 {
  printf("Error! You entered an invalid character.");
 }
 return 0;
}

//Output
Enter u to display Uppercase Alphabets.
Enter l to display Lowercase Alphabets.
a b c d e f g h i j k l m n o p q r s t u v w x y z 
