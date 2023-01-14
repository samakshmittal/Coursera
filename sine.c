#include <stdio.h>
#include <math.h>

int main()
{
  double sinValue, number;
  printf(" Please Enter the Value to calculate Sine :  ");
  scanf("%lf", &number);
  if(number>0 && number<1){
    sinValue = sin(number);
    printf("\n The Sine value of %lf = %f ", number, sinValue);
  }
  else{
    printf("Wrong input");
  }
  return 0;
  }