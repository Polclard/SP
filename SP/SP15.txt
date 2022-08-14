#include <stdio.h>

int poramnet(int a)
{
    int n1 = a % 10;
    int n2 = a / 10;

    if(n2 <= 0)
    {
        if(n1 == 9)
            return 7;
        else
            return n1;
    }

    int n3 = poramnet(n2);
    if(n1 == 9)
    {
        return(n3 * 10 + 7);
    }
    else
    {
        return(n3 * 10 + n1);
    }


}

int main()
{
    int num;
    int numbersArray[100];
    int cn = 0;
    while(scanf("%d", &num))
    {
        //printf("%d\n", poramnet(num));
        numbersArray[cn] = poramnet(num);
        cn++;
    }
    for(int i = 0; i < cn; i++)
    {
        for(int j = 0; j < cn; j++)
        {
            if(numbersArray[j] > numbersArray[i])
            {
                int temp = numbersArray[i];
                numbersArray[i] = numbersArray[j];
                numbersArray[j] = temp;
            }
        }
    }

    
    if(cn < 5)
    {
        for(int i = 0; i < cn; i++)
        {
            printf("%d ", numbersArray[i]);
        }
    }
    else
    {
       for(int i = 0; i < 5; i++)
        {
            printf("%d ", numbersArray[i]);
        } 
    }
    

    return 0;
}
