// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0022_Invert.h"

// Function definitions
// TODO: implement ex_0022_Invert
int ex_0022_Invert(int n)
{
  if (n < 0)
  {
    return -1; // entrée négative : erreur
  }

  int inverted = 0;

  while (n > 0)
  {
    int digit = n % 10;               // dernier chiffre de n
    inverted = inverted * 10 + digit; // on l'ajoute à droite de inverted
    n = n / 10;                       // on retire le dernier chiffre de n
  }

  return inverted;
}