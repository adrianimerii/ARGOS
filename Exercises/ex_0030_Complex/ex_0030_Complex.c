// Author: HE-Arc

// Standard includes
#include <stdio.h>
#include <stdbool.h>

// Local includes
#include "ex_0030_Complex.h"

// Function definitions
// TODO: implement ex_0027_Array2DSum
Complex ex_0030_InputComplex(void)
{
  Complex c = {0.0, 0.0};
  bool valid = false;

  do
  {
    printf("Please enter a complex number (r,i): ");
    int status = scanf(" (%lf ,%lf", &c.real, &c.imaginary);

    if (status == EOF)
    {
      return c; // entrée terminée : on renvoie (0, 0)
    }

    int ch = getchar();

    if (status == 2)
    {
      // Espaces/tabulations éventuels, puis la parenthèse fermante
      while (ch == ' ' || ch == '\t')
      {
        ch = getchar();
      }

      if (ch == ')')
      {
        // Après la parenthèse : seulement des espaces/tabulations jusqu'à la fin de ligne
        ch = getchar();
        while (ch == ' ' || ch == '\t')
        {
          ch = getchar();
        }

        if (ch == '\n' || ch == EOF)
        {
          valid = true;
        }
      }
    }

    // Vider stdin jusqu'à '\n' ou EOF (s'il reste quelque chose)
    while (ch != '\n' && ch != EOF)
    {
      ch = getchar();
    }

  } while (!valid);

  return c;
}

Complex ex_0030_SumComplex(Complex c1, Complex c2)
{
  Complex result;
  result.real = c1.real + c2.real;
  result.imaginary = c1.imaginary + c2.imaginary;
  return result;
}

Complex ex_0030_DiffComplex(Complex c1, Complex c2)
{
  Complex result;
  result.real = c1.real - c2.real;
  result.imaginary = c1.imaginary - c2.imaginary;
  return result;
}

void ex_0030_PrintComplex(Complex c)
{
  printf("%.2f + %.2fi\n", c.real, c.imaginary);
}

void ex_0030_Complex(void)
{
  Complex c1 = ex_0030_InputComplex();
  Complex c2 = ex_0030_InputComplex();

  printf("\nSum = ");
  ex_0030_PrintComplex(ex_0030_SumComplex(c1, c2));

  printf("\nDiff = ");
  ex_0030_PrintComplex(ex_0030_DiffComplex(c1, c2));
}