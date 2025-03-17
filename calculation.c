#include "calculation.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void rock_paper_scissors() {
  enum GameStatus { CONTINUE, GAME_WON, GAME_LOST };
  enum RoundStatus { DRAW, WON, LOST };
  enum Shape { ROCK, PAPER, SCISSORS };
}

void random_frequency() {
  int frequency1 = 0;
  int frequency2 = 0;
  int frequency3 = 0;
  int frequency4 = 0;
  int frequency5 = 0;
  int frequency6 = 0;

  /*
  printf("%s", "Enter seed: ");
  int seed = 0;
  scanf("%d", &seed);
  srand(seed);
  */
  srand(time(NULL)); // seed from computer clock

  for (int roll = 1; roll <= 60000000; ++roll) {
    int face = 1 + rand() % 6;

    switch (face) {
    case 1:
      ++frequency1;
      break;
    case 2:
      ++frequency2;
      break;
    case 3:
      ++frequency3;
      break;
    case 4:
      ++frequency4;
      break;
    case 5:
      ++frequency5;
      break;
    case 6:
      ++frequency6;
      break;
    }
  }

  printf("%s%13s\n", "Face", "Frequency");
  printf("   1%13d\n", frequency1);
  printf("   2%13d\n", frequency2);
  printf("   3%13d\n", frequency3);
  printf("   4%13d\n", frequency4);
  printf("   5%13d\n", frequency5);
  printf("   6%13d\n", frequency6);
}

void random_die() {
  for (int i = 1; i <= 10; i++) {
    printf("%d ", 1 + (rand() % 6));
  }
  puts("\n");
}

void math_functions() {
  // Math library
  printf("Square Root of 900.0 : %.2f\n", sqrt(900.0));
  printf("Cube Root of 27.0 : %.2f\n", cbrt(27.0));
  printf("Exponential function e to the 2 : %.6f\n", exp(2.0));
  printf("Natural logarithm of e : %.2f\n", log(2.718282));
  printf("Absolute value of -13.5 : %.2f\n", fabs(-13.5));
  printf("Rounds 9.2 to the smallest integer not less than 9.2 : %.2f\n",
         ceil(9.2));
  printf("Rounds -9.8 to the largest integer not greater than -9.8 : %.2f\n",
         floor(9.2));
  printf("9 raised to power 5 : %.2f\n", pow(9, 5));
  printf("Remainder of 13.657 / 2.345 : %.3f\n", fmod(13.657, 2.345));
  printf("Trigonometric sine of 0.0 : %.1f\n", sin(0.0));
  printf("Trigonometric cosine of 0.0 : %.1f\n", cos(0.0));
  printf("Trigonometric tangent of 0.0 : %.1f\n", tan(0.0));
}
