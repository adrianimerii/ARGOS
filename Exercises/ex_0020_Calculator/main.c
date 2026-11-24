// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0020_Calculator.h"

int main(void)
{
  printf("1 + 2 = %g\n", ex_0020_Calculator(1, 2, '+'));
  printf("1 - 2 = %g\n", ex_0020_Calculator(1, 2, '-'));
  printf("1.1 * 9.9 = %g\n", ex_0020_Calculator(1.1, 9.9, '*'));
  printf("1 / 2 = %g\n", ex_0020_Calculator(1, 2, '/'));
  printf("1 / 0 = %g\n", ex_0020_Calculator(1, 0, '/'));
  printf("1 z 2 = %g\n", ex_0020_Calculator(1, 2, 'z'));

  return 0;
}