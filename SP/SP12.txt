#include <stdio.h>

int BrojPozitivni(int *niza, int n)
{
    if(niza[n-1] == niza[0])
    {
        if(niza[0] > 0)
            return 1;
        else
            return 0;
    }
    else
    {
        if(niza[n-1] > 0)
        {
            return 1 + BrojPozitivni(niza, n-1);
        }
        else
        {
            return BrojPozitivni(niza, n-1);
        }
    }
}

int main()
{
    int N;
    scanf("%d", &N);

    int niza[100];
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &niza[i]);
    }

    printf("%d", BrojPozitivni(niza, N));

    return 0;
}
