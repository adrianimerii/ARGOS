// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0028_DotProduct.h"

int main(void)
{
  int u[] = {3, 2, -4};
  int v[] = {2, -3, 5};

  printf("u . v = %d\n", ex_0028_DotProduct(u, v, 3)); // attendu : -20

  return 0;
}