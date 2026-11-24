// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0017_Factorial.h"

// Function definitions
void ex_0017_Factorial(void)
{
  // Use the following message
  // print with printf("%s", input_message);
  const char *input_message = "Please enter a non-negative integer N: ";

    // TODO: read a non-negative integer N, then compute and print N!
  int n = 0;
  int status = 0;
  const int nbExpectedValues = 1;

  do
  {
    printf("%s", input_message);
    status = scanf("%d", &n);

    int ch;
    do
    {
      ch = getchar();
    } while (ch != '\n' && ch != EOF);

  } while ((status != nbExpectedValues || n < 0) && status != EOF);

  if (status == EOF)
  {
    return;
  }

  unsigned long long factorial = 1;

  for (int i = 2; i <= n; i++)
  {
    factorial = factorial * i;
  }

  printf("%d! = %llu\n", n, factorial);
}
