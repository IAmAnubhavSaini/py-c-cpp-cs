#include "astring.h"

int astrlen(char *str)
{
  int i = 0;
  for(i=0; str[i]!='\0'; i++)
  ;
  return i;
}

char *capitalize_safe(char *str)
{
  int len = astrlen(str);
  char *tmp = malloc(sizeof(char)*(len+1));
  int i = 0;
  for(i=0; str[i] != '\0'; i++){
    if(i == 0){
      tmp[i] = str[i] - 0x20;
    } else {
      tmp[i] = str[i];
    }
  }
  tmp[i] = '\0';
  return tmp;
}
