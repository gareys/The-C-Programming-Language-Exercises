#include <stdio.h>

/* print Fahrenheit-Celcius table
  for fahr = 0, 20, ..., 300; floating-point conversion */

int main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;   /* lower limit of temperature table */
  upper = 300; /* upper limit */
  step = 20;   /* step size */

  fahr = lower;

  printf("Fahrenheit to Celsius Conversion\n\n");
  printf("%10s %s %7s\n", "Fahr", " | ", "Celsius");

  while (fahr <= upper)
  {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%10.0f %s %7.1f\n", fahr, " | ", celsius);
    fahr = fahr + step;
  }
}