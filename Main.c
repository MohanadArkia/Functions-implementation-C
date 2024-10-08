#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void generateAlphabetWithASCII (char start, char end) {
   for (int i = start; i <= end; i++) {
       printf("%c | %d\n", i, i);
   }
}

void reverseString (char str[]) {
    char reversedStr[100];
    int j = 0;
    for (int i = strlen(str) - 1; i >= 0; i--) {
       reversedStr[j] = str[i]; 
       j++;
    }
    printf("%s\n", reversedStr);
}

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

  /* zFill("C", 3, '+'); */
  /* zFill("C", 2, '#'); */
  /* zFill("C", 1, ' '); */

  /* char text[] = "This is my reversed string"; */
  /* reverseString(text); */

  /* generateAlphabetWithASCII('A', 'Z'); */
  /* generateAlphabetWithASCII('a', 'z'); */
  /* generateAlphabetWithASCII(' ', '~'); */

  return 0;
}
