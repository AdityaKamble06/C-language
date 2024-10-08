//Example 1: Half Pyramid of *

#include<stdio.h>
int main()
{
 int i, j, rows;
 printf("Enter the number of rows: ");
 scanf("%d", &rows);
 
 for(i = 1; i <= rows; ++i)
 {
  for(j = 1; j <= i; ++j)
  {
   printf("* ");
  }
  printf("\n");
 }
 return 0;
}

//Output
Enter the number of rows: 5
* 
* * 
* * * 
* * * * 
* * * * * 
-----------------------------------------------------------------------------------
//Example 2: Half Pyramid of Numbers

  #include<stdio.h>
int main()
{
 int i, j, rows;
 printf("Enter the number of rows: ");
 scanf("%d", &rows);
 
 for(i = 1; i <= rows; ++i)
 {
  for(j = 1; j <= i; ++j)
  {
   printf("%d ", j);
  }
  printf("\n");
 }
 return 0;
}

//Output
Enter the number of rows: 5
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
-----------------------------------------------------------------------------------
//Example 3: Half Pyramid of Alphabets

#include <stdio.h>
int main() 
{
 int i, j;
 char input, alphabet = 'A';
 printf("Enter an uppercase character you want to print in the last row: ");
 scanf("%c", &input);
 for (i = 1; i <= (input - 'A' + 1); ++i) 
 {
  for (j = 1; j <= i; ++j) 
  {
   printf("%c ", alphabet);
  }
  ++alphabet;
  printf("\n");
 }
 return 0;
}

//Output
Enter an uppercase character you want to print in the last row: E
A 
B B 
C C C 
D D D D 
E E E E E 
------------------------------------------------------------------------------------
//Example 4: Inverted half pyramid of *

#include<stdio.h>
int main()
{
 int i, j, rows;
 printf("Enter the number of rows: ");
 scanf("%d", &rows);
 for(i = rows; i >= 1; --i)
 {
  for(j = 1; j <= i; ++j)
  {
   printf("* ");
  }
  printf("\n");
 }
 return 0;
}

//Output
Enter the number of rows: 5
* * * * * 
* * * * 
* * * 
* * 
* 
--------------------------------------------------------------------------------------------
//Example 5: Inverted half pyramid of numbers

#include<stdio.h>
int main()
{
 int i, j, rows;
 printf("Enter the number of rows: ");
 scanf("%d", &rows);
 for(i = rows; i >= 1; --i)
 {
  for(j = 1; j <= i; ++j)
  {
   printf("%d ", j);
  }
  printf("\n");
 }
 return 0;
}

//Output
Enter the number of rows: 5
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1 
--------------------------------------------------------------------------------------------
Example 6: Full Pyramid of *

#include<stdio.h>
int main()
{
 int i, space, rows, k = 0;
 printf("Enter the number of rows: ");
 scanf("%d", &rows);
 
 for(i = 1; i <= rows; ++i, k = 0)
 {
  for(space = 1; space <= rows - i; ++space)
  {
   printf("  ");
  }
  while(k != 2 * i - 1)
  {
   printf("* ");
   ++k;
  }
  printf("\n");
 }
 return 0;
}

//Output
Enter the number of rows: 6
          * 
        * * * 
      * * * * * 
    * * * * * * * 
  * * * * * * * * * 
* * * * * * * * * * * 
----------------------------------------------------------------------------------------------------------
Example 7: Full Pyramid of Numbers

#include<stdio.h>

int main()
{
 int i, space, rows, k = 0, count = 0, count1 = 0;
 printf("Enter the number of rows: ");
 scanf("%d", &rows);
 
 for(i = 1; i <= rows; ++i)
 {
  for(space = 1; space <= rows - i; ++space)
  {
   printf("  ");
   ++count;
  }
  while(k != 2 * i - 1)
  {
   if(count <= rows - 1)
   {
    printf("%d ", i + k);
    ++count;
   }
   else
   {
    ++count1;
    printf("%d ", (i + k - 2 * count1));
   }
   ++k;
  }
  count1 = count = k = 0;
  printf("\n");
 }
 return 0;
}

//Output
Enter the number of rows: 5
        1 
      2 3 2 
    3 4 5 4 3 
  4 5 6 7 6 5 4 
5 6 7 8 9 8 7 6 5
------------------------------------------------------------------------------------
Example 8: Inverted full pyramid of *

#include <stdio.h>
int main() 
{
 int rows, i, j, space;
 printf("Enter the number of rows: ");
 scanf("%d", &rows);
 for (i = rows; i >= 1; --i) 
 {
  for (space = 0; space < rows - i; ++space)
  printf("  ");
  for (j = i; j <= 2 * i - 1; ++j)
  printf("* ");
  for (j = 0; j < i - 1; ++j)
  printf("* ");
  printf("\n");
 }
 return 0;
}

//Output
Enter the number of rows: 5
* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        * 
-----------------------------------------------------------------------------------------
//Example 9: Pascal's Triangle

#include<stdio.h>
int main()
{
 int rows, coef = 1, space, i, j;
 printf("Enter the number of rows: ");
 scanf("%d", &rows);
 for(i = 0; i < rows; i++)
 {
  for(space = 1; space <= rows - i; space++)
  {
   printf("  ");
  }
  for(j = 0; j <= i; j++)
  {
   if(j == 0 || i == 0)
   {
    coef = 1;
   }
   else
   {
    coef = coef * (i - j + 1) / j;
   }
   printf("%4d",coef);
  }
  printf("\n");
 }
 return 0;
}

//Output
Enter the number of rows: 7
                 1
               1   1
             1   2   1
           1   3   3   1
         1   4   6   4   1
       1   5  10  10   5   1
     1   6  15  20  15   6   1
-----------------------------------------------------------------------------------
//Example 10: Floyd's Triangle.

#include<stdio.h>
int main()
{
 int rows, i, j, number = 1;
 printf("Enter the number of rows: ");
 scanf("%d", &rows);
 for(i = 1; i <= rows; i++)
 {
  for(j = 1; j <= i; ++j)
  {
   printf("%d ", number);
   ++number;
  }
  printf("\n");
 }
 return 0;
}

//Output
Enter the number of rows: 5
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 


