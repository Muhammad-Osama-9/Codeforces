#include <bits/stdc++.h>
#define Osama                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int main(void)
{

    long long id;
    long long row;
    int column;
    cin >> id;
    row = id / 4;
    if (row % 2 == 0)
    {
        column = id % 4;
    }
    else
    {
        column = abs((id % 4) - 3);
    }
    printf("%lld %d", row, column);

    return 0;
}
 