//Program to Count the Number of Digits

#include<stdio.h>
int main()
{
 long long n;
 int count = 0;
 printf("Enter an integer: ");
 scanf("%lld", &n);
 
 //iterate at least once, then until n becomes 0
 //remove last digit from n in each iteration
 //increase count by 1 in each iteration
 do{
  n /= 10;
  ++count;
 }while (n != 0);
 
 printf("Number of digit: %d ",count);
}

//Output
Enter an integer: 234567898
Number of digit: 9 
