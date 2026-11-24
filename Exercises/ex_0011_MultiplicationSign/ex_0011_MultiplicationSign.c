// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0011_MultiplicationSign.h"

// Function definitions
void ex_0011_MultiplicationSign(void)
{
  // TODO: read 2 integers, then print the sign of their product without computing it
  int a = 0;
  int b = 0;
  int status = 0;
  const int valeurAttendue = 2;

  do
  {
    printf("Please enter 2 integers: ");
    status = scanf("%d %d", &a, &b);

    {
      int c;
      do
      {
        c = getchar();
      } while (c != '\n' && c != EOF);
    }
  } while (status != valeurAttendue && status != EOF);

  if (status == EOF)
  {
    return;
  }

  if (a == 0 || b == 0)
  {
    printf("%d * %d = 0\n", a, b);
  }
  else if ((a > 0 && b > 0) || (a < 0 && b < 0))
  {
    printf("%d * %d > 0\n", a, b);
  }
  else
  {
    printf("%d * %d < 0\n", a, b);
  }
}