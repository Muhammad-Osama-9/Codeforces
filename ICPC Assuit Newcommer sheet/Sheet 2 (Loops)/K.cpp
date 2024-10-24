#include <stdio.h>

int main(void)
{
    long long num;
    scanf("%lld", &num);
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
            printf("%d\n", i);
    }

    return 0;
}
