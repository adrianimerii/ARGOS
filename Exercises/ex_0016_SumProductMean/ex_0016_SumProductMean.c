// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0016_SumProductMean.h"

// Function definitions
void ex_0016_SumProductMean(void)
{
  // Use the following messages
  // print with printf("%s", input_message);
  const char *input_message = "Number of values to read: ";
  // print with printf(value_message, i); where i is the value number, starting at 1
  const char *value_message = "%d. number: ";

   // TODO: read N (between 1 and 15), then N integers, and print their sum, product and mean
  int inputNumber = 0;
  int status = 0;
  const int nbExpectedValue = 1;

  // 1. Lire N entre 1 et 15
  do
  {
    printf("%s", input_message);
    status = scanf("%d", &inputNumber);

    int ch;
    do
    {
      ch = getchar();
    } while (ch != '\n' && ch != EOF);

  } while ((status != nbExpectedValue || inputNumber < 1 || inputNumber > 15) && status != EOF);

  if (status == EOF)
  {
    return;
  }

  // 2. Lire les N nombres et calculer somme et produit
  int sum = 0;
  int product = 1;

  for (int i = 1; i <= inputNumber; i++)
  {
    int value = 0;

    do
    {
      printf(value_message, i);
      status = scanf("%d", &value);

      int ch;
      do
      {
        ch = getchar();
      } while (ch != '\n' && ch != EOF);

    } while (status != nbExpectedValue && status != EOF);

    if (status == EOF)
    {
      return;
    }

    sum = sum + value;
    product = product * value;
  }

  // 3. Afficher les résultats
  double mean = (double)sum / inputNumber;

  printf("Sum = %d\n", sum);
  printf("Product = %d\n", product);
  printf("Mean = %.4f\n", mean);
}