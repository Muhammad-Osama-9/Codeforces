#include <bits/stdc++.h>

using namespace std;

#define Muhammad_Osama ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define NEW_LINE cout << "\n";
bool f = false;
void fun(int n)
{

    if (n == 0)
    {
        return;
    }
    if (f == true)
    {
        cout << ' ';
    }
    cout << n;
    f = true;
    fun(n - 1);
}

int main()
{
    int n;
    cin >> n;
    fun(n);

    return 0;
}