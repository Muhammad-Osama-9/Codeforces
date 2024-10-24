#include <stdio.h>

int main(void)
{
    long long num1, num2, cpy;
    int counter_1 = 0, counter_2 = 0, counter = 0;
    scanf("%lld %lld", &num1, &num2);

    for (; num1 <= num2; num1++)
    {
        cpy = num1;
        counter_1 = 0;
        counter_2 = 0;

        if (cpy % 10 == 4 || cpy % 10 == 7)
        {
            while (cpy)
            {
                if (cpy % 10 == 4 || cpy % 10 == 7)
                    counter_1++;

                counter_2++;
                cpy = cpy / 10;
            }
        }
        else
        {
            continue;
        }

        if (counter_1 == counter_2)
        {

            printf("%lld ", num1);
            counter++;
        }
    }
    if (!counter)
        printf("%d", -1);
    return 0;
}
