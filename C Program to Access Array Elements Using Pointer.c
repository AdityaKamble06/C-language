/Access Array Elements Using Pointers

#include<stdio.h>
int main()
{
 int data[5];
 
 printf("Enter elements: ");
 for(int i = 0; i < 5; ++i)
 {
  scanf("%d",data+i);
 }
 printf("You entered: \n");
 for(int i = 0; i < 5; ++i)
 {
  printf("%d\n", *(data + i));
 }
 return 0;
}

//Output
Enter elements: 1
2
3
4
5
You entered: 
1
2
3
4
5
