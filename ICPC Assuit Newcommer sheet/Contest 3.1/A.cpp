#include <bits/stdc++.h>

using namespace std;

#define Muhammad_Osama ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define NEW_LINE cout << "\n";

int main()
{
    Muhammad_Osama int test;
    long long l, r;
    cin >> test;
    while (test--)
    {
        cin >> l >> r;
        if (l == r)
        {
            cout << "Square";
        }
        else
        {
            cout << "Rectangle";
        }
        NEW_LINE
    }
    return 0;
}