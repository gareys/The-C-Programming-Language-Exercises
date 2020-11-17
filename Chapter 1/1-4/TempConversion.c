#include <stdio.h>

/* print Calsius-Fahrenheit table
  for celsius = -20, 0, ..., 300; floating-point conversion */

int main()
{
  float celsius, fahr;
  int lower, upper, step;

  lower = -40; /* lower limit of temperature table */
  upper = 50;  /* upper limit */
  step = 10;   /* step size */

  celsius = lower;

  printf("Celsius to Fahrenheit Conversion\n\n");
  printf("%13s %s %4s\n", "Celsius", " | ", "Fahr");

  while (celsius <= upper)
  {
    fahr = (celsius * (9.0 / 5.0)) + 32;
    printf("%13.0f %s %4.0f\n", celsius, " | ", fahr);
    celsius = celsius + step;
  }
}