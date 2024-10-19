#include <bits/stdc++.h>

using namespace std;

#define Muhammad_Osama ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define NEW_LINE cout << "\n";
void fun(int n)
{
    if (n == 0)
    {
        return;
    }
    fun(n - 1);
    cout << n << '\n';
}

int main()
{
    int n;
    cin >> n;
    fun(n);

    return 0;
}