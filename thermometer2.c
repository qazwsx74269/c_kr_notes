#include <stdio.h>

main()
{
  float fahr, celsius;
  float lower, upper, step;
  
  lower = (0 - 32) * 5.0 / 9.0;
  upper = (300 - 32) * 5.0 / 9.0;
  step = 20 * 5.0 / 9.0;
  
  celsius = lower;
  
  printf("Celsius-Fahrenheit Table\n");

  while(celsius <= upper) {
    fahr = celsius * 9.0 / 5.0 + 32;
    printf("%6.1f %3.0f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
