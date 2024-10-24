#include <stdio.h>

int main(void)
{
    long long num1, num2, tmp;
    int max = 1;
    scanf("%lld %lld", &num1, &num2);
    if (num1 < num2)
    {
        tmp = num2;
        num2 = num1;
        num1 = tmp;
    } /// num1 > num2

    for (int i = 1; i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            if (i > max)
            {
                max = i;
            }
        }
    }
    printf("%d", max);
    return 0;
}
