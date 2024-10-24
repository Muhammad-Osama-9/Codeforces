#include <stdio.h>

int main(void)
{
    int num, num2;
    char ch;
    scanf("%c", &ch);
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &num2);
        for (int j = 0; j < num2; j++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}
