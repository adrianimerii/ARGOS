// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0012_DecreasingOutput.h"

// Function definitions
void ex_0012_DecreasingOutput(void)
{
  // TODO: read 3 integers separated by commas, then print them in decreasing order
  int a = 0;
  int b = 0;
  int c = 0;
  int ordre = 0;
  int status = 0;
  const int valeurAttendue = 3;

  do
  {
    printf("Please enter 3 integers separated by commas: ");
    status = scanf("%d , %d , %d", &a, &b, &c);

    
    {
      int ch;
      do
      {
        ch = getchar();
      } while (ch != '\n' && ch != EOF);
    }
  } while (status != valeurAttendue && status != EOF);

  if (status == EOF)
  {
    return;
  }

  if (a < b)
  {
    ordre = a;
    a = b;
    b = ordre;
  }
  if (a < c)
  {
    ordre = a;
    a = c;
    c = ordre;
  }

  if (b < c)
  {
    ordre = b;
    b = c;
    c = ordre;
  }

  printf("The 3 integers sorted in decreasing order: %d, %d, %d\n", a, b, c);
}
