//Store Information and Display it Using Structure

#include<stdio.h>
struct student{
 char name[50];
 int roll;
 float marks;
}s;

int main()
{
 printf("Enter information:\n");
 printf("Enter name: ");
 fgets(s.name, sizeof(s.name),stdin);
 
 printf("Enter roll number: ");
 scanf("%d", &s.roll);
 printf("Enter marks: ");
 scanf("%f", &s.marks);
 
 printf("Displaying information:\n");
 printf("Name: ");
 printf("%s",s.name);
 printf("Roll number: %d\n", s.roll);
 printf("Marks: %.1f\n", s.marks);
 
 return 0;
}

//Output
Enter information:
Enter name: jack
Enter roll number: 34
Enter marks: 99.00
Displaying information:
Name: jack
Roll number: 34
Marks: 99.0
