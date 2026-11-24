// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0025_FillArray.h"

// Function definitions
// TODO: implement ex_0025_FillArray
int ex_0025_FillArray(int array[], int max_capacity)
{
  int count = 0;

  while (count < max_capacity)
  {
    int value = 0;
    int status = scanf("%d", &value);

    // Vider stdin jusqu'à '\n' ou EOF
    int ch;
    do
    {
      ch = getchar();
    } while (ch != '\n' && ch != EOF);

    if (status == EOF)
    {
      break; // fin de l'entrée
    }

    if (status != 1)
    {
      continue; // saisie non numérique : on l'ignore et on relit
    }

    if (value < 0)
    {
      break; // valeur négative : fin de la saisie (non stockée)
    }

    array[count] = value;
    count++;
  }

  return count;
}