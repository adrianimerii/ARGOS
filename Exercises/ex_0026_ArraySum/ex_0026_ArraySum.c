// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0026_ArraySum.h"
#define MAX_VALUES 50

// Function definitions
// TODO: implement ex_0026_ArraySum
void ex_0026_ArraySum(void)
{
  // 1. Déclarer le tableau
  int array[MAX_VALUES];
  int n = 0;
  int status = 0;

  // 2. Lire n entre 0 et 50
  do
  {
    printf("Nb values (max.50): ");
    status = scanf("%d", &n);

    int ch;
    do
    {
      ch = getchar();
    } while (ch != '\n' && ch != EOF);

  } while ((status != 1 || n < 0 || n > MAX_VALUES) && status != EOF);

  if (status == EOF)
  {
    return;
  }

  // 3. Remplir le tableau avec n valeurs
  for (int i = 0; i < n; i++)
  {
    do
    {
      printf("Value %d? ", i);
      status = scanf("%d", &array[i]);

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

  // 4. Afficher les n éléments (espace entre, pas à la fin)
  printf("array:\n");
  for (int i = 0; i < n; i++)
  {
    if (i > 0)
    {
      printf(" ");
    }
    printf("%d", array[i]);
  }
  printf("\n");

  // 5. Calculer et afficher la somme
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum = sum + array[i];
  }
  printf("Total sum: %d\n", sum);
}