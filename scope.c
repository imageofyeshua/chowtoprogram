#include "scope.h"
#include <stdio.h>

void useLocal(void);
void useStaticLocal(void);
void useGlobal(void);

int x = 1; // global variable

void scope() {
  int x = 5; // local variable to main

  printf("local x in outer scope of main is %d\n", x);

  { // start new scope
    int x = 7;
    printf("local x in outer scope of main is %d\n", x);
  }
  printf("local x in outer scope of main is %d\n", x);

  useLocal();
  useStaticLocal();
  useGlobal();
  useLocal();
  useStaticLocal();
  useGlobal();

  printf("\nlocal x in mainis %d\n", x);
}

void useLocal(void) {
  int x = 25; // initialized each time useLocal is called
  printf("\nlocal x in useLocal is %d after entering useLocal\n", x);
  ++x;
  printf("local x in useLocal is %d before exiting useLocal\n", x);
}

void useStaticLocal(void) {
  static int x = 50; // initialized once
  printf("\nlocal static x in useLocal is %d after entering useStaticLocal\n",
         x);
  ++x;
  printf("local static x in useLocal is %d before exiting useStaticLocal\n", x);
}

void useGlobal(void) {
  printf("\nglobal x is %d on entering useGlobal\n", x);
  x *= 10;
  printf("global x is %d on exiting useGlobal\n", x);
}
