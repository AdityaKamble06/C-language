//Find the Frequency of a Character

#include<stdio.h>

int main()
{
 char str[1000],ch;
 int count = 0;
 
 printf("Enter a string: ");
 fgets(str, sizeof(str), stdin);
 
 printf("Enter a character to find its frequency: ");
 scanf("%c", &ch);
 
 for(int i = 0; str[i] != '\0'; ++i)
 {
  if(ch == str[i])
  {
   ++count;
  }
 }
 
 printf("Frequency of %c = %d", ch, count);
 
 return 0;
}

//Output
Enter a string:this website is awesome.
Enter a character to find its frequency: e
Frequency of e = 4
