#include "variable.h"
#include <stdio.h>

void addition() {
  int num1 = 0;
  int num2 = 0;
  int sum = 0;

  printf("Enter first integer: ");
  scanf("%d", &num1);

  printf("Enter second integer: ");
  scanf("%d", &num2);

  sum = num1 + num2;
  printf("Sum is %d\n", sum);
}

void average() {
  int score = 0;
  int total = 0;
  double average = 0.0;
  char grade;
  unsigned int counter = 0;
  int gradepoint = 0;

  printf("%s", "Enter grade, -1 to end: ");
  scanf("%d", &score);

  while (score != -1) {
    total += score;
    counter++;

    printf("%s", "Enter grade, -1 to end: ");
    scanf("%d", &score);
  }

  if (counter != 0) {
    average = (double)total / counter;
    gradepoint = (int)average / 10;

    switch (gradepoint) {
    case 9:
      grade = 'A';
      break;
    case 8:
      grade = 'B';
      break;
    case 7:
      grade = 'C';
      break;
    case 6:
      grade = 'D';
      break;
    default:
      grade = 'F';
    }

    printf("%s", "\n\n### Test Report ###\n\n");
    printf("Your average is %.2f\n", average);
    if (grade != 'F') {
      printf("Good job!, Your grade is %c\n", grade);
    } else {
      printf("%s", "You are so stupid, Man!!!!!!");
    }
  } else {
    printf("%s", "No scores were entered\n");
  }
}
