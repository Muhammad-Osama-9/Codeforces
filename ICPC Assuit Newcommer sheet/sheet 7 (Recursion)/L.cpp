#include <bits/stdc++.h>
using namespace std;

long long summition(long long index, long long result)
{
    if (index == 0)
    {
        return result;
    }

    long long res, input;
    cin >> input;
    res = result + input;
    return (summition(index - 1, res));
}
int main()
{
    long long t;
    cin >> t;
    cout << summition(t, 0);
    return 0;
}