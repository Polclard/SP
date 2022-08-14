#include <stdio.h>
#include <string.h>

// ne menuvaj ovde
void wf() {
    FILE *f = fopen("C:\\Users\\alenj\\Desktop\\Fakultet\\Programi od Strukturno Programiranje\\PRogramiranje zadaci vtor kolokvium\\ProgramiVtorKolokvium\\textFiles\\livce.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wf();
    FILE *readFile = fopen("C:\\Users\\alenj\\Desktop\\Fakultet\\Programi od Strukturno Programiranje\\PRogramiranje zadaci vtor kolokvium\\ProgramiVtorKolokvium\\textFiles\\livce.txt", "r");

    int sumaNaUplata = 0;

    char code[100];
    int type = 0;
    double coef;

    int flag = 1;

    float maxCoef = 0.0;
    char maxCode[100];
    int maxType;

    double suma  = 1;

    while(fscanf(readFile, "%d", &sumaNaUplata) != EOF)
    {
        fscanf(readFile, "%s%d%lf", code, &type, &coef);
        suma *= coef;
        if(flag)
        {
            maxCoef = coef;
            strcpy(maxCode, code);
            maxType = type;
            flag = 0;
        }
        if(coef > maxCoef)
        {
            maxCoef = coef;
            strcpy(maxCode, code);
            maxType = type;
        }


    }

   printf("%s %d %.2f\n", maxCode, maxType, maxCoef);
   printf("%.2f", sumaNaUplata * suma);
   fclose(readFile);
   
	return 0;

}
