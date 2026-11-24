// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0010_LowercaseUppercase.h"

// Function definitions
void ex_0010_LowercaseUppercase(void)
{
  // TODO: read a character, then tell whether it is lowercase, uppercase or not a letter
  char letter = 0;
  int status = 0;
  const int valeurAttendue = 1;

  do
  {
    printf("Type a letter: ");
    status = scanf(" %c", &letter);
    {
      int c;
      do
      {
        c = getchar();
      } while (c != '\n' && c != EOF);
    }
  } while (status != valeurAttendue && status != EOF);

  if (status == EOF)
  {
    return;
  }

  if (letter >= 'a' && letter <= 'z')
  {
    printf("lowercase\n");
  }
  else if (letter >= 'A' && letter <= 'Z')
  {
    printf("UPPERCASE\n");
  }
  else
  {
    printf("The character you entered is not a letter.\n");
  }
}
