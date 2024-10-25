#include <bits/stdc++.h>
#define EZ_Problem                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
int main()
{
    int sizee;
    int minn = INT_MAX;
    int counter = 0;
    cin >> sizee;
    int arr[sizee];
    for (int i = 0; i < sizee; i++)
    {
        cin >> arr[i];
        if (arr[i] < minn)
        {
            minn = arr[i];
        }
    }
    for (int i = 0; i < sizee; i++)
    {
        if (arr[i] == minn)
        {
            counter++;
        }
    }

    printf("%s", (counter % 2 == 1 ? "Lucky" : "Unlucky"));

    return 0;
}
