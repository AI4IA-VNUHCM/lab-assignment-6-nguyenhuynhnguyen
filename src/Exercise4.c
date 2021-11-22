/*
4. Receive a string, remove all blank spaces at begin and
end of the string and leave only one blank space between words.
Ex:
 ________________________________________________
| Input: "  this  is an   unformatted  string "  |
| Output: this is an unformatted string          |
|________________________________________________|
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Ex4(char *str) {
  // Your codes here
  // Put into array
  char *array[100];
  int i = 0;
  char *p = strtok(str, " ");
  while (p != NULL) {
    array[i] = p;
    i++;
    p = strtok(NULL, " ");
  }
  // Print out array as strings
  for (int j = 0; j < i; j++) {
    printf("%s ", array[j]);
  }
  printf("\n");
}

int main(int argc, char *argv[]) {
  // testing variable, applying it to your algorithm for auto-evaluating
  char *testcase = argv[1];

  Ex4(testcase);

  return 0;
}