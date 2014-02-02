#include "adigits.h"
#include "astring.h"

int max_int(void)
{
  int max, min;
  max = 0, min = 1;

  if(A__MAX_INT != 0)
    return A__MAX_INT;

  while(min > max){
    max++;
    min++;
  }
  A__MAX_INT = max;
  A__MIN_INT = min;
  A__MAX_UINT = 2*max + 1;

  return A__MAX_INT;
}

int min_int
long max_long(void);

int min_int(void);
long min_long(void);

int number_of_digits_int(int num)
{
  int digits = 0;
  if(num < 0){
    /* this could overflow */
    num *= -1;
  }
  while(num != 0){
    digits += 1;
    num /= 10;
  }
  return digits;
}

int number_of_digits_long(long num)
{
  int digits = 0;
  if(num < 0){
    /* this could overflow */
    num *= -1;
  }
  while(num != 0){
    digits += 1;
    num /= 10;
  }
  return digits;
}

int number_of_digits_uint(unsigned int num)
{
  int digits = 0;
  while(num != 0){
    digits += 1;
    num /= 10;
  }
  return digits;
}

int number_of_digits_ulong(unsigned long num)
{
  int digits = 0;
  while(num != 0){
    digits += 1;
    num /= 10;
  }
  return digits;
}

int number_of_digits_string(char *str)
{
  int i = 0;
  int digits = 0;

  while(str[i] != '\0' && !IsNum(str[i]))
    i++;

  while(str[i] != '\0' && IsNum(str[i]))
    digits++;

  return digits;
}


