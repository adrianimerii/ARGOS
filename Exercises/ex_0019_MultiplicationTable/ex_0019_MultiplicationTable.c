// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0019_MultiplicationTable.h"

// Function definitions
// TODO: implement ex_0019_Read and ex_0019_MultiplicationTable
int ex_0019_Read(int min, int max)
{
  int value = 0;
  int status = 0;
  const int nbExpectedValues = 1;

  do
  {
    printf("Please enter the multiplication table (in [%d..%d]): ", min, max);
    status = scanf("%d", &value);

    int ch;
    do
    {
      ch = getchar();
    } while (ch != '\n' && ch != EOF);

  } while ((status != nbExpectedValues || value < min || value > max) && status != EOF);

  if (status == EOF)
  {
    return min; // entrée terminée : on renvoie une valeur valide par défaut
  }

  return value;
}

void ex_0019_MultiplicationTable(int table)
{
  printf("\nMULTIPLICATION TABLE FOR %d\n", table);

  for (int i = 1; i <= 10; i++)
  {
    printf("%d X %d = %d\n", table, i, table * i);
  }
}