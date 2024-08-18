#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void zFill (char* str, int width, char fill) {
    int strLength = strlen(str); 
    printf("%s", str);
    for (int i = 0; i < width - strLength; i++) {
        printf("%c", fill);
    }
    printf("\n");
}

void repeat (char* str, int repeats, char separator, bool latestSeparator) {
    for (int i = 0; i < repeats; i++) {
        printf("%s", str);
        if (i < repeats - 1) {
            printf("%c", separator);
        }
    }
    if (latestSeparator) {
        printf("%c", separator);
    }
    printf("\n");
}


int main () {
  /* repeat("Hello", 5, ';', true); */
  /* repeat("World", 5, ';', false); */
  zFill("C", 3, '+');
  zFill("C", 2, '#');
  zFill("C", 1, ' ');

  return 0;
}
