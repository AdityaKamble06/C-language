//Sum of Natural Numbers Using for Loop

#include<stdio.h>
int main()
{
 int n,i,sum=0;
 printf("Enter a position integer: ");
 scanf("%d",&n);
 
 for(i = 1;i <= n; ++i)
 {
  sum += i;
 }
 printf("Sum =%d",sum);
 return 0;
}

//Output
Enter a position integer: 3
Sum =6
---------------------------------------------------------------------------------------------------------
//Sum of Natural Numbers Using while Loop

#include<stdio.h>
int main()
{
 int n,i,sum=0;
 printf("Enter a position integer: ");
 scanf("%d",&n);
 i = 1;
 
 while(i <= n)
 {
  sum += i;
  ++i;
 }
 
 printf("Sum = %d",sum);
 return 0;
}

//Output
Enter a position integer: 5
Sum = 15
