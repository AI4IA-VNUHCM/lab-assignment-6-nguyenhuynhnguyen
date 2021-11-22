/*
1. Receive a maximum 4-digit integer n. Write a program to read the number n.
 ________________________________________________
| Input: 1234                                    |
| Output: one thousand two hundred thirty four   |
|________________________________________________|
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

char *parseBasicNumber(int number) {
  char *nums[] = {"one",   "two",   "three", "four", "five",   "six",
                  "seven", "eight", "nine",  "ten",  "eleven", "twelve"};
  return nums[number - 1];
}
char *parseEnhancedNumber(int number) {
  char *nums[] = {"_",   "twen",  "third", "four", "fif",
                  "six", "seven", "eight", "nine"};
  return nums[number - 1];
}

void Ex1(int n) {
  // Your codes here
  int number = n;
  //   printf("%s\n", parseBasicNumber(number));

  int num = number % 10;
  int tens = (number / 10) % 10;
  int hundreds = (number / 100) % 10;
  int thousands = (number / 1000) % 10;

  if (thousands != 0) {
    printf("%s thousand ", parseBasicNumber(thousands));
  }

  if (hundreds != 0) {
    printf("%s hundred ", parseBasicNumber(hundreds));
  }

  if (tens == 1) {
    if (num > 2) {
      printf("%steen ", parseEnhancedNumber(num));
    } else
      printf("%s", parseBasicNumber(tens * 10 + num));
  } else if (tens == 2) {
    printf("%sty ", parseEnhancedNumber(tens));
  } else if (tens != 0) {
    printf("%sty ", parseEnhancedNumber(tens));
  }

  if (num != 0 && tens != 1) {
    printf("%s ", parseBasicNumber(num));
  }
}

int main(int argc, char *argv[]) {
  // testing variable, applying it to your algorithm for auto-evaluating
  int testcase = atoi(argv[1]);

  Ex1(testcase);

  return 0;
}
