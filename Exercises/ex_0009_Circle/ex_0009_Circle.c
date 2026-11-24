// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0009_Circle.h"

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

// Function definitions
void ex_0009_Circle(void)
{
  // TODO: read the radius with scanf, then print pi and the circle surface
  double radius = 0.0, surface=0.0;

  printf("Circle radius: ");
  scanf("%lf", &radius);

   {
    int c;
    do
    {
      c = getchar();
    } while (c != '\n' && c != EOF);
  }

  surface = M_PI * radius * radius;
  printf("pi = %.6f\n", M_PI);
  printf("Circle surface = %.2f\n", surface);
}
