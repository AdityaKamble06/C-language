//Prime Numbers Between Two Integers

#include<stdio.h>
int checkPrimenumber(int n);
int main()
{
 int n1, n2, i, flag;
 
 printf("Enter two positive integers: ");
 scanf("%d %d", &n1, &n2);
 
 //swap n1 and n2 if n1 > n2
 if(n1 > n2)
 {
  n1 = n1 + n2;
  n2 = n1 - n2;
  n1 = n1 - n2;
 }
 
 printf("Prime number between %d and %d are: ", n1, n2);
 for(i = n1 + 1; i < n2; ++i)
 {
  //flag will be equal to 1 if i is Prime
  flag = checkPrimenumber(i);
  
  if(flag == 1)
  {
   printf("%d ", i);
  }
 }
 return 0;
}

//user-defined function to check prime number 
int checkPrimenumber (int n)
{
 int j,flag = 1;
 
 for(j = 2; j <= n/2; ++j)
 {
  if(n % j ==0)
  {
   flag = 0;
   break;
  }
 }
 return flag;
}

//Output
Enter two positive integers: 12
30
Prime number between 12 and 30 are: 13 17 19 23 29 
