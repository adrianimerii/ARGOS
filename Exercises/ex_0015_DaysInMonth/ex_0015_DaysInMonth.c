// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0015_DaysInMonth.h"

// Function definitions
void ex_0015_DaysInMonth(void)
{
  // Use the following message
  // print with printf("%s", input_message);
  const char *input_message = "Please enter the number of the month (january=1, ... , december=12): ";

    // TODO: read a month number between 1 and 12, then print its number of days
  int month = 0;
  int days = 0;
  int status = 0;
  const int nbExpectedValues = 1;

  do
  {
    printf("%s", input_message);
    status = scanf("%d", &month);

    {
      int ch;
      do
      {
        ch = getchar();
      } while (ch != '\n' && ch != EOF);
    }
  } while ((status != nbExpectedValues || month < 1 || month > 12) && status != EOF);

  if (status == EOF)
  {
    return;
  }

  switch (month)
  {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      days = 31;
      break;
    case 4:
    case 6:
    case 9:
    case 11:
      days = 30;
      break;
    case 2:
      days = 28;
      break;
    default:
      days = 0; 
      break;
  }

  printf("Month %d has %d days.\n", month, days);
}
