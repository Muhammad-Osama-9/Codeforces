#include <stdio.h>
#include <math.h>
int main(void)
{
    long long num, cpy, res = 0;
    int counter = 0;
    scanf("%lld", &num);

    cpy = num;
    while (cpy)
    {
        cpy /= 10;
        counter++;
    }
    cpy = num;
    for (int i = 1; i <= counter; i++)
    {
        res = res + cpy % 10 * (pow(10, counter - i));
        cpy = cpy / 10;
    }
    if (res == num)
        printf("%lld\nYES", res);
    else
    {
        printf("%lld\nNO", res);
    }

    return 0;
}
