#include <bits/stdc++.h>
using namespace std;
#define Muhammad_Osama ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
void binary(long long num, bool flag)
{
    if (num == 0)
    {
        if (flag)
        {
            cout << num;
        }
        else
        {
        }
        return;
    }
    else
    {
        int rem = num % 2;
        binary(num / 2, false);
        cout << rem;
    }
}
int main()
{
    Muhammad_Osama long long input, n;
    cin >> n;
    while (n--)
    {
        cin >> input;
        binary(input, true);
        cout << "\n";
    }
    return 0;
}