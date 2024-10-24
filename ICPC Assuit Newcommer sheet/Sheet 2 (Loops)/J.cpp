#include <stdio.h>

int main(void)
{
    long long num;
    int counter;
    scanf("%lld", &num);

    for (int i = 2; i <= num; i++)
    {
        counter = 0;
        for (int j = 1; j <= i / 2; j++)
        {
            if (i % j == 0)
                counter++;
        }
        if (counter == 1)
            printf("%d ", i);
    }

    return 0;
}
