// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0024_PrintArray.h"

int main(void)
{
  int array[] = {1, 2, 3, 4, 5};

  printf("[");
  ex_0024_PrintArray(array, 0);
  printf("]\n");

  printf("[");
  ex_0024_PrintArray(array, 4);
  printf("]\n");

  printf("[");
  ex_0024_PrintArray(array, 5);
  printf("]\n");

  return 0;
}