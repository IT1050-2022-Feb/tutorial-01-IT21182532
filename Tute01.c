/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int m1,m2,sum;
  float avg;
  printf("Enter subject marks 1 : ");
  scanf("%d",&m1);
  printf("Enter subject marks 2 : ");
  scanf("%d",&m2);

  sum= m1+m2;
  avg = sum/2.0;
  printf("average marks is : %0.2f",avg);
  
  return 0;
}

