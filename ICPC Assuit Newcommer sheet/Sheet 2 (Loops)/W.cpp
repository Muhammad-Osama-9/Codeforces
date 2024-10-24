#include <iostream>
using namespace std;

int main(void)
{
    int n;
    int flag = 0;

    cin >> n;
    int c = 1;
    for (int i = 0; i < 2 * n; i++)
    {
        if (i == n)
            flag = 1;
        else
        {
        }
        if (!flag)
        {
            for (int k = n - i - 1; k > 0; k--)
            {
                printf(" ");
            }
            for (int j = 0; j < (2 * i + 1); j++)
            {
                printf("*");
            }
        }
        else
        {
            for (int s = 0; s < i - n; s++)
            {
                printf(" ");
            }
            for (int l = 0; l < (2 * n) - c; l++)
            {
                printf("*");
            }
            c = c + 2;
        }

        printf("\n");
    }

    return 0;
}
