// Author: HE-Arc

// Standard includes
#include <stdio.h>
#include <stdbool.h>

// Local includes
#include "ex_0018_Squares.h"

// Function definitions
// TODO: implement ex_0018_Square and ex_0018_Squares
int ex_0018_Square(int value)
{
  return value * value;
}

bool ex_0018_Squares(int value)
{
  if (value < 1 || value > 1000)
  {
    return false; // hors bornes : on n'affiche rien
  }

  for (int i = 1; i <= value; i++)
  {
    printf("%d ", ex_0018_Square(i));
  }
  printf("\n");

  return true;
}