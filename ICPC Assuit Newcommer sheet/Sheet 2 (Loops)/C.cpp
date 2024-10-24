#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n, counter_even = 0, counter_pos = 0, c_neg = 0;
    cin >> n;

    int x[n];

    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        if (x[i] % 2 == 0)
            counter_even++;
        if (x[i] < 0)
            c_neg++;
        if (x[i] > 0)
            counter_pos++;
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", counter_even, n - counter_even, counter_pos, c_neg);
    return 0;
}
