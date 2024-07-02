//Factors of a Positive Integer

#include<stdio.h>
int main()
{
 int num, i;
 printf("Enter a positive integer: ");
 scanf("%d", &num);
 printf("Factors of %d are: ",num);
 
 for(i = 1; i <= num; ++i)
 {
  if(num % i == 0)
  {
   printf("%d ", i);
  }
 }
 return 0;
}

//Output
Enter a positive integer: 10
Factors of 10 are: 1 2 5 10 
