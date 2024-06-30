//Multiplication Table Up to 10

#include<stdio.h>
int main()
{
 int n;
 printf("Enter an integer: ");
 scanf("%d", &n);
 
 for(int i=1;i <= 10; ++i)
 {
  printf("%d * %d = %d\n", n, i, n*i);
 }
 return 0;
}

//Output
Enter an integer: 5
5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
5 * 4 = 20
5 * 5 = 25
5 * 6 = 30
5 * 7 = 35
5 * 8 = 40
5 * 9 = 45
5 * 10 = 50
-----------------------------------------------------------------------------------------------------------------------
//Multiplication Table Up to a range

#include<stdio.h>
int main()
{
 int n,i,range;
 printf("Enter an integer: ");
 scanf("%d", &n);
 
 //prompt user for positive range
 do{
  printf("Enter the range (positive integer): ");
  scanf("%d",&range);
 }while(range <= 0);
 
 for(i = 1;i <= range; ++i)
 {
  printf("%d * %d =  %d\n", n, i, n*i);
 }
 
 return 0;
}

//Output
Enter an integer: 7
Enter the range (positive integer): 0 9
7 * 1 =  7
7 * 2 =  14
7 * 3 =  21
7 * 4 =  28
7 * 5 =  35
7 * 6 =  42
7 * 7 =  49
7 * 8 =  56
7 * 9 =  63


