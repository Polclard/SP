#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int N, X;
    scanf("%d%d", &N, &X);
    char str[80];
    int newASCII;


    fgets(str, sizeof(str), stdin);
    for(int i = 0; i < N; i++)
    {
        fgets(str, sizeof(str), stdin);
        str[strlen(str)-1] ='\0';
        for(int j = 0; j < strlen(str); j++)
        {
            if(isalpha(str[j]))
            {
                if(isupper(str[j]))
                {
                    newASCII = (int)str[j];
                    int k = 0;
                    while(k < X)
                    {
                        newASCII++;
                        if(newASCII > (int)('Z'))
                        {
                            newASCII = (int)('A');
                        }
                        k++;
                    }
                    str[j] =(char)newASCII;
                }
                else if(islower(str[j]))
                {
                    newASCII = (int)str[j];
                    int k = 0;
                    while(k < X)
                    {
                        newASCII++;
                        if(newASCII > (int)('z'))
                        {
                            newASCII = (int) ('a');
                        }
                        k++;
                    }
                    str[j] =(char)newASCII;
                }
            }
        }
        puts(str);
    }
    return 0;
}
