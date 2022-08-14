#include <stdio.h>
#include <string.h>
#define MAX 100

//ne menuvaj!
void wtf() {
    FILE *f = fopen("broevi.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main()
{
    wtf();
    FILE * readFile = fopen("broevi.txt", "r");

    char line[100];
    char fr = 0;

    int MSD = 0;
    int max = 0;
    int flag = 1;
    int num = 0;
    int saveTheMainNumber;
    int when = 0;
    while(fscanf(readFile, "%d", &when) != 0)
    {
        flag = 1;
        if(when == 0)
            break;
        for(int i = 0; i < when; i++)
        {
            fscanf(readFile, "%d", &num);
            int saveNum = num;
            while(1)
            {
                if(saveNum > 0 && saveNum < 10)
                {
                    MSD = saveNum;
                    break;
                }
                saveNum /= 10;
                MSD = saveNum;

            }
            if(flag)
            {
                max = MSD;
                saveTheMainNumber = num;
                flag = 0;
            }
            if(MSD > max)
            {
                max = MSD;
                saveTheMainNumber = num;
            }
        }
        printf("%d\n", saveTheMainNumber);

    }


    fclose(readFile);

    return 0;
}
