#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    float novaMat[100][100];

    float X = 0;
    float Y = 0;

    float mat[100][100];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            scanf("%f", &mat[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i > j)
            {
                X += mat[i][j];
            }
            if(j+i >= n)
            {
                Y += mat[i][j];
            }
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if(i == j && i+j == n-1)
            {
                novaMat[i][j] = X+Y;
            }
            else if(i == j)
            {
                novaMat[i][j] = X;
            }
            else if(i+j == n-1)
            {
                novaMat[i][j] = Y;
            }
            else
            {
                novaMat[i][j] = 0;
            }
        }
    }


    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("%.1f ", novaMat[i][j]);
        }
        printf("\n");
    }




    return 0;
}
