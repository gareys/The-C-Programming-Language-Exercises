#include <stdio.h>

/*  print Fahrenheit-Celsius table
    in reverse using the for loop  */

#define UPPER 300
#define LOWER 0
#define STEP 20

int main()
{
  int fahr;

  printf("Fahrenheit to Celsius Conversion\n\n");
  printf("%10s %s %7s\n", "Fahr", " | ", "Celsius");

  for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
    printf("%10d %s %7.1f\n", fahr, " | ", (5.0 / 9.0) * (fahr - 32));
}