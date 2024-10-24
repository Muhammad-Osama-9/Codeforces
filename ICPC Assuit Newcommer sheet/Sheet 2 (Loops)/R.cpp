#include <stdio.h>

int main(void)
{
    int num1, num2, tmp, result;
    while (1)
    {
        result = 0;
        scanf("%d%d", &num1, &num2);
        // fflush(stdin) ;
        if (num1 <= 0 || num2 <= 0)
        {
            return 0;
        }
        else
        {
            if (num1 < num2) /// num1 MAX
            {
                tmp = num2;
                num2 = num1;
                num1 = tmp;
            }

            for (int j = num2; j <= num1; j++)
            {
                printf("%d ", j);
                result += j;
            }
            printf("sum =%d\n", result);
        }
    }

    return 0;
}
