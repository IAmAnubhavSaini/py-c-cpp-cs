#ifndef A_STRING_H
#define A_STRING_H

#include <stdlib.h>
#include <stdio.h>

#define ToLower(x) (x | 0x20)
#define ToNum(x)   (x-'0')
#define IsAlpha(x) (ToLower(x) >= 'a' && ToLower(x) <= 'z')
#define IsNum(x)   (x >= '0' && x <= '9')
#define IsAlphaNum(x) (IsAlpha(x) || IsNum(x))
#define IsSpace(x) (x==' ' || x=='\n' || x=='\t' || !IsAlphaNum(x))

int str2int(char *str);

int astrlen(char *str);

char *capitalize_safe(char *str);

int wount(char *str, char *separators); /* word count */

int count_instances(char *str, char ofwhat);

int astrlen_expand(char *str, char what, int times);

char *expand_safe(char *str, char what, int times, char replacewith);

#endif //A_STRING_H
