#include <bits/stdc++.h>
#define EZ_Problem                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
int main()
{
    unsigned int sizee;
    unsigned long long sum = 0;
    cin >> sizee;
    string num;
    cin >> num;
    for (unsigned int i = 0; i < sizee; i++)
    {
        sum += num[i] - 48;
    }
    printf("%lld", sum);
    return 0;
}
