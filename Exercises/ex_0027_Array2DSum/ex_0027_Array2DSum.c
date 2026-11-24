// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0027_Array2DSum.h"

#define MAX_SIZE 50

// Lit une taille entre 0 et MAX_SIZE avec l'invite donnée.
// Retourne la taille lue, ou -1 si l'entrée est terminée (EOF).
static int readSize(const char *prompt)
{
  int size = 0;
  int status = 0;

  do
  {
    printf("%s", prompt);
    status = scanf("%d", &size);

    int ch;
    do
    {
      ch = getchar();
    } while (ch != '\n' && ch != EOF);

  } while ((status != 1 || size < 0 || size > MAX_SIZE) && status != EOF);

  if (status == EOF)
  {
    return -1;
  }

  return size;
}

// Function definitions
// TODO: implement ex_0027_Array2DSum
void ex_0027_Array2DSum(void)
{
  // 1. Déclarer le tableau 2D
  int array[MAX_SIZE][MAX_SIZE];

  // 2. Lire les tailles
  int nbLines = readSize("Nb lines (max.50): ");
  if (nbLines < 0)
  {
    return;
  }

  int nbColumns = readSize("Nb columns (max.50): ");
  if (nbColumns < 0)
  {
    return;
  }

  // 3. Remplir le tableau, ligne par ligne
  for (int i = 0; i < nbLines; i++)
  {
    for (int j = 0; j < nbColumns; j++)
    {
      int status = 0;

      do
      {
        printf("array[%d][%d]: ", i, j);
        status = scanf("%d", &array[i][j]);

        int ch;
        do
        {
          ch = getchar();
        } while (ch != '\n' && ch != EOF);

      } while (status != 1 && status != EOF);

      if (status == EOF)
      {
        return;
      }
    }
  }

  // 4. Calculer et afficher la somme
  int sum = 0;
  for (int i = 0; i < nbLines; i++)
  {
    for (int j = 0; j < nbColumns; j++)
    {
      sum = sum + array[i][j];
    }
  }

  printf("Total sum: %d\n", sum);
}