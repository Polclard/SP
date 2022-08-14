#include <stdio.h>
#include <ctype.h>
#include <string.h>

void wtf()
{
    FILE * f = fopen("podatoci.txt", "w");
    char c;
    while((c = getchar()) != '#')
    {
        fputc(c, f);
    }
    fclose(f);
}

int main()
{
    wtf();
    char z1, z2;
    scanf(" %c%c", &z1, &z2);
    if((int)z1 == 10 || (int)z2 == 10)
    {
        z2 = z1;
        z1 = ' ';
    }


    FILE * readFile = fopen("podatoci.txt", "r");

    char line[80];
    int flag = 0;
    int flag_z1 = 1;
    int flag_z2 = 1;

    while(fgets(line, sizeof(line), readFile) != NULL)
    {
        flag = 0;
        
        flag_z1 = 1;
        
        flag_z2 = 1;
        for(int i = 0; i < strlen(line); i++)
        {
            if(line[i] == z1 && flag_z1)
            {
                flag = 1;
                flag_z1 = 0;
                continue;
            }
            if(line[i] == z2 && flag_z2)
            {
                flag = 0;
                flag_z2 = 0;
            }
            if(flag)
            {
                printf("%c", line[i]);
            }
        }
        printf("\n");
    }

    fclose(readFile);

    return 0;
}
