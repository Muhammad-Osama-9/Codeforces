#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (j == num / 2 && i == num / 2)
            {
                printf("X");
                continue;
            }
            if (i == j && i != num / 2)
            {
                printf("\\");
            }
            else if (i + j == num - 1 && i != num / 2)
            {
                printf("/");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
 