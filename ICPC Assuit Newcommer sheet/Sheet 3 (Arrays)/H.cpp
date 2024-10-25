#include <bits/stdc++.h>
#define EZ_Problem                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int main()
{
    EZ_Problem int sizee;
    cin >> sizee;
    int arr[sizee];
    for (int i = 0; i < sizee; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + sizee);
    for (int i = 0; i < sizee; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
