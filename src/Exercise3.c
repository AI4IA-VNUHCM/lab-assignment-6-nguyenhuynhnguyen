/*
3. Receive a string, find the shortest and longest word in that string.
Ex:
 __________________________________________________________
| Input: "This is a string with shortest and longest word" |
| Output: Shortest word: a                                 |
|         Longest word: shortest                           |
|__________________________________________________________|
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Ex3(char *str) {

  // Your codes here
  // Extract words from str to array words
  char *p = strtok(str, " ");
  int n = 0;
  char *words[100];
  while (p != NULL) {
    words[n] = p;
    printf("%s\n", words[n]);
    p = strtok(NULL, " ");
    n++;
  }
  // Find the shortest word
  int shortest = strlen(words[0]);
  int shortest_index = 0;
  for (int i = 0; i < n; i++) {
    if (strlen(words[i]) < shortest) {
      shortest = strlen(words[i]);
      shortest_index = i;
    }
  }
  // Find the longest word
  int longest = strlen(words[0]);
  int longest_index = 0;
  for (int i = 0; i < n; i++) {
    if (strlen(words[i]) > longest) {
      longest = strlen(words[i]);
      longest_index = i;
    }
  }
  printf("Shortest word: %s\n", words[shortest_index]);
  printf("Longest word: %s\n", words[longest_index]);
}

int main(int argc, char *argv[]) {
  // testing variable, applying it to your algorithm for auto-evaluating
  char *testcase = argv[1];

  Ex3(testcase);

  return 0;
}
