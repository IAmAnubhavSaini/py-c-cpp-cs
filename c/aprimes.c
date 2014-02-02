#include "aprimes.h"

int is_prime(int num)
{
  int i;

  if(num < 2){
    return 0;
  }

  if(num==2 || num==3 || num == 5 || num==7){
    return 1;
  }

  if(num%2==0 || num%3==0 || num%5==0 || num%7==0){
    return 0;
  }

  for(i=2; i<=num/2; i++){
    if(num % i == 0){
      return 0;
    }
  }

  return 1;
}

int is_not_prime(int num)
{
  return !is_prime(num);
}

int *generate_primes_int_safe(int below)
{
  int *primes, i, size, j, p, isprime;
  primes = malloc(sizeof(int)*10);
  size = below;

  if(size>100){
    size /= 2;    
    primes = realloc(sizeof(int)*size);
  } else {
    primes = realloc(sizeof(int)*size);
  }

  for(i=2, p=0; i<size; i++){
    for(j=2, isprime=1; j<i && isprime; j++){
      if(i%j==0){
        isprime=0;
      }
    }
    if(isprime){
      primes[p++] = i;
    }
  }
  primes[p] = -1;
  return primes;
}


/* Awesome and hopefully faster code */

void init_primesvec(void)
{
  PrimesVec = malloc(sizeof(struct Primes)*100);
  if(!PrimesVec){
    perror("Cannot create Primes Vector!\n");
    abort();
  }
  PrimesVec->size = 100;
  PrimesVec[0]->prime = 2;
  PrimesVec[0]->next = PrimesVec[1];
  PrimesVec[0]->index = 0;
  PrimesVec[1]->prime = 2;
  PrimesVec[1]->next = PrimesVec[1];
  PrimesVec[1]->index = 1;
  PrimesVec[2]->prime = 5;
  PrimesVec[2]->next = PrimesVec[3];
  PrimesVec[2]->index = 2;
  PrimesVec[3]->prime = 7;
  PrimesVec[3]->next = PrimesVec[4];
  PrimesVec[3]->index = 3;
}
