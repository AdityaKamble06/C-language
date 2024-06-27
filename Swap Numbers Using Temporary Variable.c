//Swap Numbers Using Temporary Variable//

#include<stdio.h>
int main()
{
 double first,second,temp;
 printf("Enter first number:");
 scanf("%lf",&first);
 printf("Enter second number:");
 scanf("%lf",&second);
 
 //value of first is assigned to temp
 temp=first;
 
 //value of second is assigned to first
 first=second;
 
 //value of temp(initial value of first) is assigned to second
 second=temp;
 
 //%.2lf displays number up to 2 decimal points
 printf("\n After swapping ,first number=%.2lf\n",first);
 printf("\n After swapping ,second number=%.2lf\n",second);
 return 0;
}

//Output
Enter first number:2
Enter second number:4

 After swapping ,first number=4.00

 After swapping ,second number=2.00
