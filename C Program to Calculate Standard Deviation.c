//Example: Population Standard Deviation

#include<math.h>
#include<stdio.h>

float calculateSD(float data[]);

int main()
{
 int i;
 float data[10];
 printf("Enter 10 elements: ");
 for(i = 0; i < 10; ++i)
 {
  scanf("%f", &data[i]);
 }
 printf("\nStandard Deviation = %.6f",calculateSD(data));
  
 return 0;
}

float calculateSD(float data[])
{
 float sum = 0.0, mean,SD = 0.0;
 int i;
 for(i = 0; i < 10; ++i)
 {
  sum += data[i];
 }
 mean = sum / 10;
 for(i = 0; i < 10; ++i)
 {
  SD += pow(data[i] - mean, 2);
 }
 return sqrt(SD / 10);
}

//Output
Enter 10 elements: 1
2
3
4
5
6
7
8
9
0

Standard Deviation = 2.872281
