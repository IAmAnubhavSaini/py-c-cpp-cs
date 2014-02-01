#include "../astring.h"
#include<stdio.h>

int main()
{
  char *name = "anubhav saini!";
  printf("%s capitalized %s\n", name, capitalize_safe(name));
  return 0;
}
