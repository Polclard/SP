#include <stdio.h>

float rec(int *arr, int size, int i)
{
    if(i >= size-1)
    {
        return (*(arr + i));
    }
    else
    {
        
        return arr[i] + (1 / rec((arr), size, i+=1));
    }


}

int main()
{
    int N;
    scanf("%d", &N);
    int niza[100];
    int g = 0;

    for(int i = 0; i < N; i++)
    {
        scanf("%d", &niza[i]);
    }
    printf("%f", rec(niza, N, g));

    return 0;
}
