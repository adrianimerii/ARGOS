// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0023_CompareArray.h"

int main(void)
{
  int array1[] = {1, 2, 3, 4, 4};
  int array2[] = {1, 2, 3, 4, 5};

  printf("Compare 0: %s\n", ex_0023_CompareArray(array1, array2, 0) ? "true" : "false");
  printf("Compare 4: %s\n", ex_0023_CompareArray(array1, array2, 4) ? "true" : "false");
  printf("Compare 5: %s\n", ex_0023_CompareArray(array1, array2, 5) ? "true" : "false");

  return 0;
}