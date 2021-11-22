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

void Ex2(int n, char *str[]) {
  // Compare two string in element
  for (int i = 0; i < n; i++)
    for (int j = i + 1; j < n; j++)
      if (strcmp(str[i], str[j]) > 0) {
        char *tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
      }

  // Print result
  for (int i = 0; i < n; i++)
    if (i < n - 1)
      printf("%s ", str[i]);
    else
      printf("%s", str[i]);
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
