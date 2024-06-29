//C Program to Find the Largest Number Among Three Numbers
------------------------------------------------------------------------------------------------------------------
//Example 1: Using if statement
#include<stdio.h>
int main()
{
 double n1,n2,n3;
 printf("Enter three different numbers: ");
 scanf("%lf %lf %lf",&n1,&n2,&n3);
 
 //if n1 is greater than both n2 and n3,n1 is the largest 
 if(n1 >= n2 && n1 >= n3)
 {
  printf("%.2f is the largest number.",n1);
 }
 
 //if n2 is greater than both n1 and n3 , n2 is the largest 
 if(n2 >= n1 && n2 >= n3)
 {
  printf("%.2f is the largest number.\n",n2);
 }
 
 //if n3 is greater than both n1 and n2 , n3 is the largest
 if(n3 >= n1 && n3 >= n2)
 {
  printf("%.2f is the largest number.",n3);
 }
 
 return 0;
}

//Output
Enter three different numbers: 2
4
6
6.00 is the largest number.
------------------------------------------------------------------------------------------------------------------------
//Example 2: Using if..else ladder
#include<stdio.h>
int main()
{
 double n1,n2,n3;
 
 printf("Enter three numbers: ");
 scanf("%lf %lf %lf",&n1,&n2,&n3);
 
 //if n1 is greater than both n2 and n3,n1 is the largest 
 if(n1 >= n2 && n1 >= n3)
 {
  printf("%.2f is the largest number.",n1);
 }
 
 //if n2 is greater than both n1 and n3 , n2 is the largest 
 else if(n2 >= n1 && n2 >= n3)
 {
  printf("%.2f is the largest number.\n",n2);
 }
 
 //if both above conditions are false,n3 is the largest
 else
 {
  printf("%.2f is the largest number.",n3);
 }
 
 return 0;
}

//Output
Enter three numbers: 2
4
6
6.00 is the largest number.
-------------------------------------------------------------------------------------------------------------------
//Example 3: Using Nested if..else 

#include<stdio.h>
int main()
{
 double n1,n2,n3;
 
 printf("Enter three numbers: ");
 scanf("%lf %lf %lf",&n1,&n2,&n3);
 
 //outer if statement
 if(n1 >= n2)
 {
  //inner if...else
  if(n1 >= n3)
  {
   printf("%.2lf is the largest number.",n1);
  }
  else
  {
   printf("%.2lf is the largest number.",n3);
  }
 }
 
 //outer else statement
 else
 {
  //inner if...else
  if(n2 >= n3)
  {
   printf("%.2lf is the largest number.",n2);
  }
  else
  {
   printf("%.2lf is the largest number.",n3);
  }
 }
 return 0;
}

//Output
Enter three numbers: 2
7
9
9.00 is the largest number.













