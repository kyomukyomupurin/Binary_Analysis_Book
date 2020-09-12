#include <stdio.h>
#include <string.h>

void vuln(char* str) {
  char str2[] = "beef";
  char overflame[16];
  printf("Input an string\n");
  scanf("%s", overflame);
  if (strcmp(str, str2) == 0) {
    printf("hacked!\n");
  } else {
    printf("failed!\n");
  }
}

int main() {
  char string[] = "fish";
  vuln(string);

  return 0;
}