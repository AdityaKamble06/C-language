//Store Information in Structure and Display it

#include<stdio.h>
struct student{
 char firstName[50];
 int roll;
 float marks;
}s[5];

int main()
{
 int i;
 printf("Enter information of stdent:\n");
 
 //stroing information
 for(i = 0; i < 5; ++i)
 {
  s[i].roll = i + 1;
  printf("\nFor roll number%d,\n",s[i].roll);
  printf("Enter first name: ");
  scanf("%s",s[i].firstName);
  printf("Enter marks: ");
  scanf("%f",&s[i].marks);
 }
 
 printf("Displaying information:\n\n");
 
 //Displaying information
 for(i = 0;i < 5; ++i)
 {
  printf("\nRoll number: %d\n", i + 1);
  printf("First name: ");
  puts(s[i].firstName);
  printf("Marks: %.1f",s[i].marks);
  printf("\n");
 }
 return 0;
}

//Output
Enter information of stdent:

For roll number1.
Enter first name: tom
Enter marks: 45

For roll number2.
Enter first name: jod
Enter marks: 34

For roll number3.
Enter first name:goldy
Enter marks: 56

For roll number4.
Enter first name: ankush
Enter marks: 98

For roll number5.
Enter first name: soham
Enter marks: 56
Displaying information:


Roll number: 1
First name: tom
Marks: 45.0

Roll number: 2
First name: jod
Marks: 34.0

Roll number: 3
First name: goldy
Marks: 56.0

Roll number: 4
First name: ankush
Marks: 98.0

Roll number: 5
First name: soham
Marks: 56.0

