#include <stdio.h>
#include <string.h>

int main()
{

   int M, N;
   scanf("%d%d", &N, &M);

   int matrica[100][100];

   for(int i = 0; i < N; i++)
   {
        for(int j = 0; j < M; j++)
        {
            scanf("%d", &matrica[i][j]);
        }
   }

   int i_1, j_1;
   scanf("%d%d", &i_1, &j_1);

   int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;

   for(int i = 0; i < N; i++)
   {
        for(int j = 0; j < M; j++)
        {
            if(i < i_1 && j < j_1)
            {
                sum2 += matrica[i][j];
            }
            else if(i >= i_1 && j >= j_1)
            {
                sum4 += matrica[i][j];
            }
            else if(i >= i_1 && j < j_1)
            {
                sum3 += matrica[i][j];
            }
            else if(i < i_1 && j>= j_1)
            {
                sum1 += matrica[i][j];
            }
        }
   }

   printf("%d %d %d %d", sum1, sum2, sum3, sum4);
    return 0;
}
