#include "control.h"
#include <math.h>
#include <stdio.h>

void for_at() {
  int x, i, j;
  printf("%s", "Enter an integer in the range 1-20: ");
  scanf("%d", &x);
  for (i = 1; i < x; i++) {
    for (j = 1; j < x; j++) {
      if (j == i)
        printf("%c", '@');
      else
        printf(" ");
    }
    printf("\n");
  }
}

void compound_interest() {
  double principle = 1000.0;
  double rate = 0.05;

  printf("%4s%21s\n", "Year", "Amount on deposit");

  for (int year = 1; year <= 10; ++year) {
    double amount = principle * pow(1.0 + rate, year);
    printf("%4d%21.2f\n", year, amount);
  }
}

void switch_gradecounter() {
  int aCount = 0;
  int bCount = 0;
  int cCount = 0;
  int dCount = 0;
  int fCount = 0;

  puts("Enter the score. ");
  puts("Enter the EOF character to end input.");
  int grade = 0;

  // loop until user types end-of-file key sequence
  while ((grade = getchar()) != EOF) {
    switch (grade) {
    case 'A':
    case 'a':
      puts("Your grade is A");
      aCount++;
      break;
    case 'B':
    case 'b':
      puts("Your grade is B");
      bCount++;
      break;
    case 'C':
    case 'c':
      puts("Your grade is C");
      cCount++;
      break;
    case 6:
    case 'D':
    case 'd':
      puts("Your grade is D");
      dCount++;
      break;
    case '\n': // ignore newlines,
    case '\t': // tabs
    case ' ':  // and spaces in input
      break;
    default:
      puts("Your grade is F");
      fCount++;
    }
  }

  puts("\nTotals for each letter grade are:");
  printf("A: %d\n", aCount);
  printf("B: %d\n", bCount);
  printf("C: %d\n", cCount);
  printf("D: %d\n", dCount);
  printf("F: %d\n", fCount);
}
