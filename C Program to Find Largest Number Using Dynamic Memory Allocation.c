//Example: Find the Largest Element

#include <stdio.h>
#include <stdlib.h>

int main() 
{

 int n;
 double *data;
 printf("Enter the total number of elements: ");
 scanf("%d", &n);

 // Allocating memory for n elements
 data = (double *)calloc(n, sizeof(double));
 if (data == NULL) 
 {
  printf("Error!!! memory not allocated.");
  exit(0);
 }

 // Storing numbers entered by the user.
 for (int i = 0; i < n; ++i) 
 {
  printf("Enter number%d: ", i + 1);
  scanf("%lf", data + i);
 }

 // Finding the largest number
 for (int i = 1; i < n; ++i) 
 {
  if (*data < *(data + i)) 
  {
   *data = *(data + i);
  }
 }
 printf("Largest number = %.2lf", *data);

 free(data);

 return 0;
}

//Output
Enter the total number of elements: 5
Enter number1: 3.4
Enter number2: 2.4
Enter number3: -5
Enter number4: 24.2
Enter number5: 6.7
Largest number = 24.20
