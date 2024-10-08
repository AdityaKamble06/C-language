//Example #1: GCD Using for loop and if Statement

#include<stdio.h>
int main()
{
 int n1, n2, i, gcd;
 
 printf("Enter two integers: ");
 scanf("%d %d", &n1, &n2);
 
 for(i=1; i <= n1 && i <= n2; ++i)
 {
  //Check if i is factor of both integers
  if(n1%i==0 && n2%i==0)
  gcd = i;
 }
 
 printf("G.C.D of %d and %d is %d", n1, n2, gcd);
 
 return 0;
}

//Output
Enter two integers: 3 7
G.C.D of 3 and 7 is 1
-------------------------------------------------------------------------------------------------------------------------------------------------------
//Example #2: GCD Using while loop and if...else Statement

#include<stdio.h>
int main()
{
 int n1, n2;
 
 printf("Enter two positive integers: ");
 scanf("%d %d",&n1,&n2);
 
 while(n1!=n2)
 {
  if(n1>n2)
  {
   n1-=n2;
  }
  else
  {
   n2-=n1;
  }
 }
 printf("GCD = %d",n1);
 
 return 0;
}

//Output
Enter two positive integers: 2 4
GCD = 2
---------------------------------------------------------------------------------------------------------------------------------------------------------
//Example #3: GCD for both positive and negative numbers

#include<stdio.h>
int main()
{
 int n1, n2;
 
 printf("Enter two positive integers: ");
 scanf("%d %d",&n1,&n2);
 
 //if user enters negative number,sign of the number is changed to positive
 n1 = (n1>0) ? n1 : -n1;
 n2 = (n2>0) ? n2 : -n2;
 
 while(n1!=n2)
 {
  if(n1>n2)
  {
   n1-=n2;
  }
  else
  {
   n2-=n1;
  }
 }
 printf("GCD = %d",n1);
 
 return 0;
}

//Output
Enter two positive integers: 23
-18
GCD = 1
