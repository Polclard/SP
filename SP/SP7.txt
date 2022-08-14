#include <stdio.h>
#include <math.h>

int main()
{
    int matrica[100][100];
    int M, N;
    scanf("%d%d", &M, &N);
    int niza[M];
    int suma = 0;

    float sub;
    int maxSub = 0;
    int flag = 1;

    float largestSub;

    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            scanf("%d", &matrica[i][j]);
        }
    }

    for(int i = 0; i < M; i++)
    {
        suma = 0;
        flag = 1;
        for(int j = 0; j < N; j++)
        {
            suma += matrica[i][j];
        }

        for (int k = 0; k < N; k++)
        {
            sub = (float)(((float)(matrica[i][k]) - (float)suma / N));
            if(sub < 0)
                sub *= -1;
            if(flag)
            {
                maxSub = matrica[i][k];
                largestSub = (float)(((float)(matrica[i][k]) - (float)suma / N));
                flag = 0;
            }
            if(sub > largestSub)
            {
                largestSub = sub;
                maxSub = matrica[i][k];
            }
        }

        niza[i] = maxSub;
    }

    for(int i = 0; i < M; i++)
    {
        printf("%d ", niza[i]);
    }

    return 0;
}
