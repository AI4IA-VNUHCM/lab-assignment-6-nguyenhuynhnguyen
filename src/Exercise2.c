/*
2. Receive n strings from the input and sort them ascendingly.
Ex:
 _________________________________________
| Input: one two three                    |
| Output: one three two                   |
|_________________________________________|
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int parseBasicNumber(char *str) {
  if (strcmp(str, "zero") == 0) {
    return 0;
  } else if (strcmp(str, "one") == 0) {
    return 1;
  } else if (strcmp(str, "two") == 0) {
    return 2;
  } else if (strcmp(str, "three") == 0) {
    return 3;
  } else if (strcmp(str, "four") == 0) {
    return 4;
  } else if (strcmp(str, "five") == 0) {
    return 5;
  } else if (strcmp(str, "six") == 0) {
    return 6;
  } else if (strcmp(str, "seven") == 0) {
    return 7;
  } else if (strcmp(str, "eight") == 0) {
    return 8;
  } else if (strcmp(str, "nine") == 0) {
    return 9;
  } else {
    return -1;
  }
  return -1;
}

char *parseBasicNumberWords(int number) {
  char *nums[] = {"one",   "two",   "three", "four", "five",   "six",
                  "seven", "eight", "nine",  "ten",  "eleven", "twelve"};
  return nums[number - 1];
}

void Ex2(int n, char *str[]) {
  // Your codes here
  int orderArray[n];
  for (int i = 0; i < n; i++) {
    orderArray[i] = parseBasicNumber(str[i]);
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - 1; j++) {
      if (orderArray[j] > orderArray[j + 1]) {
        int temp = orderArray[j];
        orderArray[j] = orderArray[j + 1];
        orderArray[j + 1] = temp;
      }
    }
  }
  for (int i = 0; i < n; i++) {
    printf("%s ", parseBasicNumberWords(orderArray[i]));
  }
}

int main(int argc, char *argv[]) {
  // testing variable, applying it to your algorithm for auto-evaluating
  argc--;
  char *testcase[argc];
  int i;
  for (i = 0; i < argc; i++) {
    testcase[i] = argv[i + 1];
  }

  Ex2(argc, testcase);

  return 0;
}
