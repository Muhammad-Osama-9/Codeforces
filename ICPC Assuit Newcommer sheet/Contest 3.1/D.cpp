#include <bits/stdc++.h>

using namespace std;

#define Muhammad_Osama ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define NEW_LINE cout << "\n";

int main()
{
    long long n, counter = 0;
    cin >> n;
    vector<long long> vec(n);
    vector<long long> freq(1002, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        freq[vec[i] + 1]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (freq[vec[i]] > 0)
        {
            counter += freq[vec[i]];
            freq[vec[i]] = 0;
        }
    }

    cout << counter;

    return 0;
}