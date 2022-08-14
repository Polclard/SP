#include <stdio.h>
#include <string.h>
#include <ctype.h>

// ne menuvaj ovde
void wtf() {
    FILE *f = fopen("dat.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wtf();

	FILE *readFile = fopen("dat.txt", "r");

    int firstNumLoc = 0;
    int lastNumLoc = 0;
    char line[100];
    char keepLine[100];
    int max;
    int dif = 0;
    char theFinalLine[100];
    int flag = 1;

    while(fgets(line, sizeof(line), readFile) != NULL)
    {
        int f1 = 1;
        int f2 = 1;
        for(int i = 0; i < strlen(line); i++)
        {
            if(isdigit(line[i]) && f1)
            {
                firstNumLoc = i;
                f1 = 0;
            }
            if(isdigit(line[strlen(line) - (i+1)]) && f2)
            {
                lastNumLoc = strlen(line) - (i+1);
                f2 = 0;
            }
        }
        dif =lastNumLoc - firstNumLoc;
        if(flag)
        {
            max = dif;
            strcpy(keepLine, line);
            int g = 0;
            for(int k = firstNumLoc; k <= lastNumLoc; k++)
            {
                theFinalLine[g] = keepLine[k];
                g++;
            }
            flag = 0;
        }
        if(dif >= max)
        {
            max = dif;
            strcpy(keepLine, line);
            int g = 0;
            for(int k = firstNumLoc; k <= lastNumLoc; k++)
            {
                theFinalLine[g] = keepLine[k];
                g++;
            }
        }
    }

    puts(theFinalLine);
    fclose(readFile);
    return 0;
}
