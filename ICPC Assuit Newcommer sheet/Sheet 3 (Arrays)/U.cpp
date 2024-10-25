#include <bits/stdc++.h>
using namespace std;

#define Muhammad_Osama ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define NEW_LINE printf("\n");

int main()
{
    Muhammad_Osama long long size_a, size_b;
    long long j, current_j = 0;
    bool not_found;
    cin >> size_a >> size_b;
    long long arr_a[size_a], arr_b[size_b];
    for (int i = 0; i < size_a; i++)
    {
        cin >> arr_a[i];
    }
    for (int i = 0; i < size_b; i++)
    {
        cin >> arr_b[i];
    }
    for (int i = 0; i < size_b; i++)
    {
        not_found = true;
        for (j = current_j; j < size_a; j++)
        {
            if (arr_a[j] == arr_b[i])
            {
                current_j = j + 1;
                not_found = false;
                break;
            }
        }

        if (not_found)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}