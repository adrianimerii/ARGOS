// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0021_SumN.h"

int main(void)
{
  printf("SumN(1, 5) = %d\n", ex_0021_SumN(1, 5));
  printf("SumN(5, 1) = %d\n", ex_0021_SumN(5, 1));
  printf("SumN(1, 1) = %d\n", ex_0021_SumN(1, 1));
  printf("SumN(1, 100) = %d\n", ex_0021_SumN(1, 100));
  printf("SumN(-3, 3) = %d\n", ex_0021_SumN(-3, 3));

  return 0;
}