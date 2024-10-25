#include <bits/stdc++.h>
#define EZ_Problem                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
int main()
{
    EZ_Problem int n, q, r, l;
    bool ch;
    int x;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int med;

    while (q--)
    {
        cin >> x;
        l = 0;
        r = n - 1;
        ch = 0;
        while (l <= r)
        {
            med = (l + (r)) / 2;
            if (x == a[med])
            {
                ch = 1;
                break;
            }
            else if (x > a[med])
                l = med + 1;
            else
                r = med - 1;
        }
        cout << (ch ? "found\n" : "not found\n");
    }
    return 0;
}
