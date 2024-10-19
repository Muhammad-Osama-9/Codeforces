#include <bits/stdc++.h>
#define Osama                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int main(void)
{
    Osama int test;
    long long num;
    int counter = 0, maxx = 0;
    cin >> test;
    while (test--)
    {
        counter = 0;
        cin >> num;
        if (num % 2 == 1)
        {
            counter = 0;
            continue;
        }
        while (num)
        {
            if (num % 2 == 0)
            {
                counter++;
                num /= 2;
            }
            else
            {
                break;
            }
        }
        if (counter > maxx)
        {
            maxx = counter;
        }
    }
    printf("%d", maxx);
    return 0;
}
 