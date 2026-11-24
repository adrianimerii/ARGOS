// Author: HE-Arc

// Standard includes
#include <stdio.h>
#include <stdbool.h>

// Local includes
#include "ex_0018_Squares.h"

int main(void)
{
  // Test de ex_0018_Square
  printf("Square(7) = %d\n", ex_0018_Square(7));

  // Test d'un cas valide : doit afficher 1 4 9 16 25 et renvoyer true
  bool ok = ex_0018_Squares(5);
  printf("Squares(5) returned %s\n", ok ? "true" : "false");

  // Test d'un cas hors bornes : ne doit rien afficher et renvoyer false
  ok = ex_0018_Squares(0);
  printf("Squares(0) returned %s\n", ok ? "true" : "false");

  return 0;
}