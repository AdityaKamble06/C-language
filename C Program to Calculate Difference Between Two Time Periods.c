//Calculate Difference Between Two Time Periods

#include <stdio.h>
struct TIME {
   int seconds;
   int minutes;
   int hours;
};

void differenceBetweenTimePeriod(struct TIME t1,
                                 struct TIME t2,
                                 struct TIME *diff);

int main() 
{
 struct TIME startTime, stopTime, diff;

 printf("Enter the start time. \n");
 printf("Enter hours, minutes and seconds: ");
 scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);

 printf("Enter the stop time. \n");
 printf("Enter hours, minutes and seconds: ");
 scanf("%d %d %d", &stopTime.hours, &stopTime.minutes, &stopTime.seconds);

 // Difference between start and stop time
 differenceBetweenTimePeriod(startTime, stopTime, &diff);
 printf("\nTime Difference: %d:%d:%d - ", startTime.hours, startTime.minutes, startTime.seconds);
 printf("%d:%d:%d ", stopTime.hours, stopTime.minutes, stopTime.seconds);
 printf("= %d:%d:%d\n", diff.hours, diff.minutes, diff.seconds);
 return 0;
}

// Computes difference between time periods
void differenceBetweenTimePeriod(struct TIME start, struct TIME stop, struct TIME *diff) 
 {
  while (stop.seconds > start.seconds) 
  {
   --start.minutes;
   start.seconds += 60;
  }
  diff->seconds = start.seconds - stop.seconds;
  while (stop.minutes > start.minutes) 
  {
   --start.hours;
   start.minutes += 60;
  }
  diff->minutes = start.minutes - stop.minutes;
  diff->hours = start.hours - stop.hours;
}

//Output
Enter the start time. 
Enter hours, minutes and seconds: 22
3
5
Enter the stop time. 
Enter hours, minutes and seconds: 10
5
7

Time Difference: 22:3:5 - 10:5:7 = 11:57:58
