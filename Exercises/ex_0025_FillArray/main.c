// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0025_FillArray.h"

int main(void)
{
  int array[] = {-2, -2, -2, -2};

  printf("Enter values (negative to stop):\n");
  int n = ex_0025_FillArray(array, 4);

  printf("%d value(s) read. Array: ", n);
  for (int i = 0; i < 4; i++)
  {
    printf("%d ", array[i]);
  }
  printf("\n");

  return 0;
}