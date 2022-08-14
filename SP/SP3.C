#include <stdio.h>
#include <string.h>

int sum_pos(int *array, int ind_, int N_)
{
    int sum = 0;

    for(int i = ind_; i < N_; i++)
    {
        sum += *(array+i);
    }

    return sum;
}

int main()
{

    int N;
    scanf("%d", &N);
    int niza[100];

    for(int i = 0; i < N; i++)
    {
        scanf("%d", (niza+i));
    }

    int ind;
    scanf("%d", &ind);


    printf("%d", sum_pos(niza, ind, N));
    return 0;
}
