//Check Positive or Negative Using Nested if...else

#include<stdio.h>
int main()
{
 double num;
 printf("Enter a number: ");
 scanf("%lf",&num);
 
 if(num <= 0.0)
 {
  if(num == 0.0)
  {
   printf("You entered 0.");
  }
  else
  {
   printf("You entered a negetive number.");
  }
 }
 else
 {
  printf("You entered a positive number.");
 }
 
 return 0;
}

//Output
Enter a number: -0.8
You entered a negetive number.
------------------------------------------------------------------------------------------------------------------------------
//Check Positive or Negative Using if...else Ladder


#include<stdio.h>
int main()
{
 double num;
 printf("Enter a number: ");
 scanf("%lf",&num);
 
 if(num < 0)
 {
  printf("You entered a negative number.");
 }
 else if(num > 0)
 {
  printf("You entered a positive number.");
 }
 else
 {
  printf("You entered 0.");
 }
 
 return 0;
}

//Output
Enter a number: 2
You entered a positive number.
