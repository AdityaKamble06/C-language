//Example: Largest Element in an array

#include<stdio.h>
int main()
{
 int n;
 double arr[100];
 printf("Enter the number of elements (1 to 100): ");
 scanf("%d", &n);
 
 for(int i = 0; i < n; ++i)
 {
  printf("Enter number%d: ", i + 1);
  scanf("%lf", &arr[i]);
 }
 
 //storing the largest number
 for(int i = 1; i < n; ++i)
 {
  if(arr[0] < arr[i])
  {
   arr[0] = arr[i];
  }
 }
 printf("Largest element = %.2lf", arr[0]);
 
 return 0;
}

//Output
Enter the number of elements (1 to 100): 2
Enter number1: 3
Enter number2: 4
Largest element = 4.00
