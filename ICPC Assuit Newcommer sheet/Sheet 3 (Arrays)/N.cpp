#include <bits/stdc++.h>
using namespace std;
// prefix sum //
int main()
{
    int a, b;
    int counter = 0;
    cin >> a >> b;
    string code;
    cin >> code;
    if (code[a] == '-')
    {
        for (int i = 0; i < b; i++)
        {
            if (code[i + a + 1] >= '0' && code[i + a + 1] <= '9')
            {
                counter++;
            }
            else
            {
                printf("No");
                break;
            }
        }
        if (counter == b)
            printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
