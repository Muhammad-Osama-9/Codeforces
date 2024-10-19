#include <bits/stdc++.h>
using namespace std;

long long MAX(long long it, long long result)
{

    long long input, res;
    cin >> input;
    res = max(result, input);
    if (it == 0)
    {
        return res;
    }
    // cout << "it = " << it << " res = " << res  << "\n" ;

    return max(MAX(it - 1, res), input);
}
int main()
{
    int num;
    cin >> num;
    long long res = INT64_MIN;

    cout << MAX(num - 1, res);
    return 0;
}