//Program to Find Roots of a Quadratic Equation

#include<math.h>
#include<stdio.h>
int main()
{
 double a,b,c,discriminant,root1,root2,realPart,imagePart;
 
 printf("Enter coefficients a, b and c: ");
 scanf("%lf %lf %lf",&a,&b,&c);
 
 discriminant = b * b - 4 * a * c;
 
 //condition for real and different Roots
 if(discriminant>0)
 {
  root1 = ( -b + sqrt(discriminant)) / (2 * a);
  root2 = ( -b - sqrt(discriminant)) / (2 * a);
  printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
 }
 
 //condition for real and equal Roots
 else if(discriminant==0)
 {
  root1=root2=-b/(2*a);
  printf("root1=root2=%.2lf",root1);
 }
 
 //if roots are not real
 else
 {
  realPart=-b/(2*a);
  imagePart=sqrt(-discriminant)/(2*a);
  printf("root1=%.2lf+%.2lfi and root2=%.2f-%.2fi",realPart,imagePart,realPart,imagePart);
 }
 
 return 0;
}

//Output
Enter coefficients a, b and c: 3 5 9
root1=-0.83+1.52i and root2=-0.83-1.52i
