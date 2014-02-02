#ifndef A_DIGITS_H
#define A_DIGITS_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

static int A__MAX_INT = 0;
static int A__MIN_INT = 0;
static long A__MAX_LONG = 0;
static long A__MIN_LONG = 0;
static int A__MAX_UINT = 0;
static int A__MAX_ULONG = 0;


int max_int(void);
long max_long(void);

int min_int(void);
long min_long(void);

int number_of_digits_int(int num);
int number_of_digits_long(long num);

int number_of_digits_uint(unsigned int num);
int number_of_digits_ulong(unsigned long num);

int number_of_digits_string(char *str);

#endif //A_DIGITS_H 
