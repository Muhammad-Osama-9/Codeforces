#include <bits/stdc++.h>
using namespace std;
#define Muhammad_Osama ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
void pyramid(int n, int end, int space, int star)
{

    if (n == end)
    {
        return;
    }

    for (int i = 0; i < space; i++)
    {
        cout << " ";
    }
    for (int i = 0; i < 1 + 2 * star; i++)
    {
        cout << "*";
    }

    cout << "\n";
    pyramid(n, end + 1, space + 1, star - 1);
}
int main()
{
    Muhammad_Osama int n;
    cin >> n;
    pyramid(n, 0, 0, n - 1);
    return 0;
}