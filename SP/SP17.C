#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    int mat[100][100];

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &mat[i][j]);
        }
    }

    int sum1 = 0;
    int sum2 = 0;
    if(n % 2 != 0)
    {
        for (int i = 0; i < m; ++i)
        {
            sum1 = 0;
            sum2 = 0;
            for (int j = 0; j < n; ++j)
            {
                if(j <= n/2)
                {
                    sum1 += mat[i][j];
                }
                if(j >= n/2)
                {
                    sum2 += mat[i][j];
                }
            }
            mat[i][n/2] = sum1-sum2 > 0? sum1-sum2 : -(sum1-sum2);
        }
    }
    else
    {
        for (int i = 0; i < m; ++i)
        {
            sum1 = 0;
            sum2 = 0;
            for (int j = 0; j < n; ++j)
            {
                if(j < (n/2))
                {
                    sum1 += mat[i][j];
                }
                if(j >= (n/2))
                {
                    sum2 += mat[i][j];
                }
            }
            mat[i][n/2] = sum1-sum2 > 0? sum1-sum2 : -(sum1-sum2);
            mat[i][n/2 - 1] = sum1-sum2 > 0? sum1-sum2 : -(sum1-sum2);
        }
    }


    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }




    return 0;
}
