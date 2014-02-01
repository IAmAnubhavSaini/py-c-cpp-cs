#include "astring.h"

int str2int(char *str)
{
  int num, i;
  for(i=0, num=0; str[i] != '\0'; i++){
    num = num*10 + ToNum(str[i]);
  }
  return num;
}

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

int wount(char *str, char *sep)
{
  int i, j, k, words, in_word;
  char ch, sp;
  for(i=0, words=0; str[i] != '\0'; i++){
    ch = str[i];
    if(!IsSpace(ch)){
      in_word = 1;
    }
    for(j=0; sep[j] != '\0' && in_word; j++){
      sp = sep[j];
      if(ch == sp){
        in_word = 0;
        words += 1;
      }
    }
  }
  if(in_word){
    words += 1;
  }
  return words;
}

int count_instances(char *str, char ofwhat)
{
  int i, count;
  for(i=0, count=0; str[i] != '\0'; i++){
    if(ofwhat == str[i])
      count += 1;
  }
  return count;
}

int astrlen_expand(char *str, char what, int times)
{
  int len = 0;
  len = astrlen(str);
  len += (count_instances(str, what)*times);
  return len;
}

char *expand_safe(char *str, char what, int times, char replacement)
{
  int i,j,k;
  int expand_len = astrlen_expand(str, what, times);
  char *nstr = malloc(sizeof(char) * (expand_len+1));

/* this is working
 * printf("input: %s, %c, %d, %c\n", str, what, times, replacement);
 */

  for(i=0,k=0; str[i] != '\0'; i++){
    if(str[i] == what){
      for(j=0; j<times; j++){
        nstr[k++] = replacement;
      }
    } else {
      nstr[k++] = str[i];
    }
  }
  nstr[k] = '\0';
//  printf("%s\n", nstr);
  return nstr;
}
