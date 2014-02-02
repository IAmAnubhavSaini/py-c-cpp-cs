#ifndef A_PRIMES_H
#define A_PRIMES_H

#include <stdio.h>
#include <stdlib.h>


/* simple, boring code,
 * but non-sideeffectual code.
 */
int is_prime(int num);
int is_not_prime(int num);
int *generate_primes_int_safe(int below);

/* complex, awesome code,
 * but side-effectual code
 * and oh fragile too.
 */
struct Primes{
  long prime;
  long index;
  struct Primes *next;
};

static struct Primes *PrimesVec;

void init_primesvec(void);

#endif //A_PRIMES_H
