//Program to Swap Elements Using Call by Reference

#include<stdio.h>
void cyclicSwap(int *a, int *b,int *c);
int main()
{
 int a, b, c;
 
 printf("Enter a, b and c respectively: ");
 scanf("%d %d %d", &a, &b, &c);
 
 printf("value before swapping:\n");
 printf("a = %d \nb= %d \nc= %d\n", a, b, c);
 
 cyclicSwap(&a,&b,&c);
 
 printf("Value after swapping:\n");
 printf("a = %d \nb = %d \nc= %d",a,b,c);
 
 return 0;
}

void cyclicSwap(int *n1,int *n2, int *n3)
{
 int temp;
 
 //swapping in cyclic order
 temp = *n2;
 *n2 = *n1;
 *n1 = *n3;
 *n3 = temp;
}

//Output
Enter a, b and c respectively: 1
2
3
value before swapping:
a = 1 
b= 2 
c= 3
Value after swapping:
a = 3 
b = 1 
c= 2
