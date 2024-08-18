#include <stdio.h>
#include <stdbool.h>

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
  repeat("Hello", 5, ';', true);
  repeat("World", 5, ';', false);
  return 0;
}
