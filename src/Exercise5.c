/*
5. Given a string containing just the characters '(', ')', '{', '}', '[' and
']', determine if the input string is valid. The brackets must close in the
correct order. Ex:
 ________________________
| Input: "{([])}"        |
| Output: Valid!         |
| Input: "{[)}"          |
| Output: Invalid!       |
|________________________|
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Ex5(char *str) {
  // Your codes here
  int i = 0;
  int count = 0;
  int len = strlen(str);
  char *array[100];
  while (i < len) {
    if (str[i] == '(' || str[i] == '[' || str[i] == '{') {
      array[count] = str[i];
      count++;
    } else if (str[i] == ')' || str[i] == ']' || str[i] == '}') {
      if (count == 0) {
        printf("Invalid!\n");
        return;
      } else if (str[i] == ')' && array[count - 1] == '(') {
        count--;
      } else if (str[i] == ']' && array[count - 1] == '[') {
        count--;
      } else if (str[i] == '}' && array[count - 1] == '{') {
        count--;
      } else {
        printf("Invalid!\n");
        return;
      }
    }
    i++;
  }
  if (count == 0) {
    printf("Valid!\n");
  } else {
    printf("Invalid!\n");
  }
}

int main(int argc, char *argv[]) {
  // testing variable, applying it to your algorithm for auto-evaluating
  char *testcase = argv[1];

  Ex5(testcase);
  return 0;
}
