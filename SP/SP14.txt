#include <stdio.h>



int main()
{

    int N;
    scanf("%d", &N);
    int mat[100][100];
    int novaMat[100][100];

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N*2; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    int opp = 0;
    for(int i = 0; i < N*2; i++)
    {
        opp=0;
        for(int j = 0; j < N*2; j++)
        {
            if(j < N)
            {
               novaMat[i][j] = mat[i][j];
            }
        }
    }
    int c = N;

    for(int i = 0; i < N; i++)
    {
        for(int j = N; j < N*2; j++)
        {
            novaMat[c][j-N] = mat[i][j];
        }
        c++;
    }

    for(int i = 0; i < N*2; i++)
    {
        for(int j = 0; j < N; j++)
        {
            printf("%d ", novaMat[i][j]);
        }
        printf("\n");
    }

    return 0;
}

