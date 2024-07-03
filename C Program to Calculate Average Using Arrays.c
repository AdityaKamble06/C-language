//Store Numbers and Calculate Average Using Arrays

#include<stdio.h>
int main()
{
 int n, i;
 float num[100], sum =0.0, avg;
 
 printf("Enter the numbers of elements: ");
 scanf("%d", &n);
 
 while(n > 100 || n < 1)
 {
  printf("Error! number should in range of (1 to 100).\n");
  printf("Enter the number again: ");
  scanf("%d", &n);
 }
 
 for(i = 0; i < n; ++i)
 {
  printf("%d. Enter number: ", i+1);
  scanf("%f",&num[i]);
  sum +=num[i];
 }
 
 avg = sum / n;
 printf("Average = %.2f",avg);
 return 0;
}

//Output
Enter the numbers of elements: 5
1. Enter number: 2
2. Enter number: 3
3. Enter number: 4
4. Enter number: 5
5. Enter number: 6
Average = 4.00
