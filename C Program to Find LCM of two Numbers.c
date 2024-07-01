//LCM using while and if

#include<stdio.h>
int main()
{
 int n1, n2, max;
 printf("Enter two positive integers: ");
 scanf("%d %d",&n1,&n2);
 
 //Maximum number between n1 and n2 is stored in Max
 max = (n1 > n2) ? n1 : n2;
 
 while(1)
 {
  if((max % n1 == 0) && (max % n2 == 0))
  {
   printf("The LCM of %d and %d is %d.", n1, n2, max);
   break;
  }
  ++max;
 }
 return 0;
}


//Output
Enter two positive integers: 2 3
The LCM of 2 and 3 is 6.
---------------------------------------------------------------------------------------------------
//LCM Calculation Using GCD

#include<stdio.h>
int main()
{
 int n1, n2, i, gcd, lcm;
 printf("Enter two positive integers: ");
 scanf("%d %d",&n1,&n2);
 
 //Loop to find the Gcd
 for(i=1;i<=n1 && i<=n2;++i)
 {
  //Check if i is a factor of both integers
  if(n1 % i ==0  && n2 % i== 0)
  {
   gcd = i;
  }
 }
 lcm= (n1 * n2) / gcd;
 printf("The Lcm of two numbers %d and %d is %d.", n1, n2, lcm);
 return 0;
}

//Output
Enter two positive integers: 72
120
The Lcm of two numbers 72 and 120 is 360.
