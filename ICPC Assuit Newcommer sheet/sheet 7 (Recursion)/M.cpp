#include <bits/stdc++.h>

using namespace std;
#define Muhammad_Osama ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
long long suffix_sum(long long size, long long result, long long to)
{
    if (size == 0)
    {
        return result;
    }
    else
    {
        long long input;
        cin >> input;
        result = suffix_sum(size - 1, 0, to);
        if (size <= to)
            result += input;

        return result;
    }
}
int main()
{
    Muhammad_Osama long long size, to;
    cin >> size >> to;
    cout << suffix_sum(size, 0, to);

    return 0;
}