#include <bits/stdc++.h>

using namespace std;
#define Muhammad_Osama ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
long long fibbonaci(int n)
{

    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    return (fibbonaci(n - 1) + fibbonaci(n - 2));
}
int main()
{
    Muhammad_Osama int n;
    cin >> n;
    cout << fibbonaci(n-1);
    return 0;
}