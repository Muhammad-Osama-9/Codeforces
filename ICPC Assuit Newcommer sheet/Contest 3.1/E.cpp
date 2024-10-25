#include <bits/stdc++.h>

using namespace std;

#define Muhammad_Osama ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define NEW_LINE cout << "\n";

int main()
{
    Muhammad_Osama int size;
    int res1 = 0, res2 = 0;

    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0, j = 1; i < size || j < size; i += 2, j += 2)
    {
        if (arr[i] < 0)
        {
            res1++;
        }
        if (arr[j] > 0)
        {
            res1++;
        }
    }
    for (int i = 0, j = 1; i < size || j < size; i += 2, j += 2)
    {
        if (arr[i] > 0)
        {
            res2++;
        }
        if (arr[j] < 0)
        {
            res2++;
        }
    }
    cout << min(res1, res2);
    return 0;
}