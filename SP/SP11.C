#include <stdio.h>
#include <ctype.h>
#include <string.h>

void wtf() {
    FILE *f = fopen("input.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wtf();

    char line[100];
    int numOfDigits = 0;
    int keep = 0;
    int cn = 0;

    FILE *readFile = fopen("input.txt", "r");

    while(fgets(line, sizeof(line), readFile) != NULL)
    {
        numOfDigits = 0;
        int niza[100] = {0};
        int keep = 0;
        for(int i = 0; i < strlen(line); i++)
        {
            if(isdigit(line[i]))
            {
                niza[numOfDigits] = line[i]-'0';
                numOfDigits++;
            }
        }

        for(int i = 0; i < numOfDigits; i++)
        {
            for(int j = 0; j < numOfDigits; j++)
            {
                if(niza[i] < niza[j])
                {
                    keep = niza[i];
                    niza[i] = niza[j];
                    niza[j] = keep;
                }
            }
        }

        printf("%d:", numOfDigits);
        for(int i = 0; i < numOfDigits; i++)
        {
            printf("%d", niza[i]);
        }
        printf("\n");
    }

    fclose(readFile);
    return 0;
}
