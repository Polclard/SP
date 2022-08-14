#include <stdio.h>



int main()
{
    int X;
    scanf("%d", &X);

    int M, N;
    scanf("%d%d", &M, &N);
    int mat[100][100];

    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }


    int sum = 0;
    for(int i = 0; i < M; i++)
    {
        sum = 0;
        for(int j = 0; j < N; j++)
        {
            sum += mat[i][j];
        }

        if(sum > X)
        {
            for(int k = 0; k < N; k++)
            {
                mat[i][k] = 1;
            }
        }
        else if(sum < X)
        {
            for(int k = 0; k < N; k++)
            {
                mat[i][k] = -1;
            }
        }
        else if(sum = X)
        {
            for(int k = 0; k < N; k++)
            {
                mat[i][k] = 0;
            }
        }
    }


    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}

