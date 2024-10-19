#include <bits/stdc++.h>

using namespace std;
#define Muhammad_Osama ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
long long factorial(long long num)
{
    long long res;
    if (num == 1)
    {
        return 1;
    }
    else
    {
        res = num * factorial(num - 1);
    }

    return res;
}
int main()
{
    Muhammad_Osama long long input;
    cin >> input;

    cout << factorial(input);
    return 0;
}