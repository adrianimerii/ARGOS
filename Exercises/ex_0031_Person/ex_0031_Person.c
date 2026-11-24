// Author: HE-Arc

// Standard includes
#include <stdio.h>
#include <string.h>

// Local includes
#include "ex_0031_Person.h"

#define MAX_PERSONS 10
#define CURRENT_YEAR 2020
#define AGE_LIMIT 80

// Function definitions
// TODO: implement ex_0027_Array2DSum
void ex_0031_Person(void)
{
  // 1. Tableau de 10 personnes, dont 7 initialisées
  Person persons[MAX_PERSONS] = {
      {"Knuth", "Donald", 1938},
      {"Kernighan", "Brian", 1942},
      {"Ritchie", "Dennis", 1941},
      {"Thompson", "Ken", 1943},
      {"Minsky", "Marvin", 1927},
      {"Dijkstra", "Edsger", 1930},
      {"Stroustrup", "Bjarne", 1950}};

  // 2. Compter les personnes enregistrées (nom non vide)
  int count = 0;
  for (int i = 0; i < MAX_PERSONS; i++)
  {
    if (persons[i].lastName[0] != '\0')
    {
      count++;
    }
  }
  printf("%d Persons\n", count);

  // 3. Personnes de moins de 80 ans
  printf("Persons less than %d years old:\n", AGE_LIMIT);
  for (int i = 0; i < count; i++)
  {
    int age = CURRENT_YEAR - persons[i].birthYear;
    if (age < AGE_LIMIT)
    {
      printf("%s %s %d years\n", persons[i].firstName, persons[i].lastName, age);
    }
  }

  // 4. Premier et dernier nom dans l'ordre alphabétique
  int firstIndex = 0;
  int lastIndex = 0;
  for (int i = 1; i < count; i++)
  {
    if (strcmp(persons[i].lastName, persons[firstIndex].lastName) < 0)
    {
      firstIndex = i;
    }
    if (strcmp(persons[i].lastName, persons[lastIndex].lastName) > 0)
    {
      lastIndex = i;
    }
  }

  printf("\nAlphabetic order:\n");
  printf("The first is: %s\n", persons[firstIndex].lastName);
  printf("The last is: %s\n", persons[lastIndex].lastName);
}