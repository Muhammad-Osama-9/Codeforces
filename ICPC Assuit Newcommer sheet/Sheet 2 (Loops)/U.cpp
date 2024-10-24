#include <iostream>
using namespace std;

int main(void)
{
    long long n, a, b, res = 0, cpy;
    int sum = 0;

    cin >> n >> a >> b;

    for (int i = 1; i <= n; i++)
    {
        sum = 0;
        cpy = i;
        while (cpy)
        {
            sum = sum + cpy % 10;
            cpy = cpy / 10;
        }
        if (sum >= a && sum <= b)
        {

            res = res + i;
        }
    }
    cout << res;

    return 0;
}
