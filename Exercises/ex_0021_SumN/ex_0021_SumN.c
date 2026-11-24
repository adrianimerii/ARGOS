// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0021_SumN.h"

// Function definitions
// TODO: implement ex_0021_SumN
int ex_0021_SumN(int a, int b)
{
  // Si les bornes sont inversées, on les échange
  if (a > b)
  {
    int temp = a;
    a = b;
    b = temp;
  }

  int sum = 0;

  for (int i = a; i <= b; i++)
  {
    sum = sum + i;
  }

  return sum;
}