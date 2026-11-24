// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0029_Time.h"

// Function definitions
// TODO: implement ex_0029_InitTime
Time ex_0029_InitTime(int hh, int mm, int ss)
{
  Time t;
  t.hh = hh;
  t.mm = mm;
  t.ss = ss;
  return t;
}
// TODO: implement ex_0029_PrintTime
void ex_0029_PrintTime(Time t)
{
  printf("%02d:%02d:%02d\n", t.hh, t.mm, t.ss);
}
// TODO: implement ex_0029_Time
void ex_0029_Time(void)
{
  Time marathon = ex_0029_InitTime(5, 3, 17);
  ex_0029_PrintTime(marathon);
}