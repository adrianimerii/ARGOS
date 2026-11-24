// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0022_Invert.h"

int main(void)
{
  printf("Invert(1234) = %d\n", ex_0022_Invert(1234));
  printf("Invert(1200) = %d\n", ex_0022_Invert(1200));
  printf("Invert(0) = %d\n", ex_0022_Invert(0));
  printf("Invert(-12) = %d\n", ex_0022_Invert(-12));

  return 0;
}