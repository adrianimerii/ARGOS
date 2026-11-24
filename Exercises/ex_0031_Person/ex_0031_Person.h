// Author: HE-Arc

#ifndef EX_0031_PERSON_H
#define EX_0031_PERSON_H

// Standard includes

// Local includes

// Types
#define NAME_LENGTH 20

typedef struct
{
  char lastName[NAME_LENGTH + 1];  // nom (20 caractères + '\0')
  char firstName[NAME_LENGTH + 1]; // prénom (20 caractères + '\0')
  int birthYear;                   // année de naissance
} Person;

// Function prototypes
void ex_0031_Person(void);

#endif // EX_0031_PERSON_H