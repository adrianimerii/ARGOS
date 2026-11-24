// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0020_Calculator.h"

// Function definitions
// TODO: implement ex_0020_Calculator
double ex_0020_Calculator(double a, double b, char op)
{
  double result = 0.0;

  switch (op)
  {
    case '+':
      result = a + b;
      break;
    case '-':
      result = a - b;
      break;
    case '*':
      result = a * b;
      break;
    case '/':
      if (b != 0)
      {
        result = a / b;
      }
      // sinon, result reste à 0
      break;
    default:
      // opérateur inconnu : result reste à 0
      break;
  }

  return result;
}