#include <bits/stdc++.h>

using namespace std;

#define Muhammad_Osama ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define NEW_LINE cout << "\n";

int main()
{
    int size, k;
    long long sum = 0;
    cin >> size >> k;
    vector<long long> vec(size);
    for (int i = 0; i < size; i++)
    {
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());
    for (int i = size - 1; k--; i--)
    {

        if (vec[i] > 0)
            sum += vec[i];
    }
    cout << sum;
    return 0;
}