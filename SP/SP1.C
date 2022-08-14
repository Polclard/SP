#include <stdio.h>
#include <ctype.h>
#include <string.h>

void writeToFile() {
  FILE *f = fopen("text.txt", "w");
  char c;
  while((c = getchar()) != '#') {
    fputc(c, f);
  }
  fclose(f);
}
int main() {

  writeToFile();

  FILE *readFile = fopen("text.txt", "r");

  int flag = 1;
  int flag2 = 0;

  char momentaryLetter;
  char nextLetter;

  int counter = 0;

  char str[100];

  while(fgets(str, sizeof(str), readFile))
  {

   for(int i = 0; i < strlen(str); i++)
    {
        momentaryLetter = tolower(str[i]);
        nextLetter = tolower(str[i+1]);

        if ((momentaryLetter == 'a' || momentaryLetter == 'e' || momentaryLetter == 'i' || momentaryLetter == 'o' || momentaryLetter == 'u') && (nextLetter == 'a' || nextLetter == 'e' || nextLetter == 'i' || nextLetter == 'o' || nextLetter == 'u'))
        {
            printf("%c%c\n", momentaryLetter, nextLetter);
            counter++;
        }
    }
  }
    printf("%d", counter);
    fclose(readFile);

  return 0;
}

