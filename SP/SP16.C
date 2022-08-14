#include <stdio.h>

int max(int n)
{
    int a = n % 10;
    int b = n / 10;
    if(b <= 0)
    {
        return a;
    }
    int c = max(b);
    return a > c ? a : c;
}

int main()
{
    int num;
    while(scanf("%d", &num))
    {
        printf("%d\n", max(num));
    }
    return 0;
}
