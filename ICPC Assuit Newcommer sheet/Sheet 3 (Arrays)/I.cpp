#include <bits/stdc++.h>
#define EZ_Problem                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
int main()
{

    int sizee, minn, res;

    int test;
    cin >> test;
    while (test--)
    {
        minn = INT_MAX;
        cin >> sizee;
        int arr[sizee];
        for (int i = 0; i < sizee; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < sizee - 1; i++)
        {
            for (int j = i + 1; j < sizee; j++)
            {
                res = arr[i] + arr[j] + j - i;
                if (res < minn)
                {

                    minn = res;
                }
            }
        }
        printf("%d\n", minn);
    }

    return 0;
}
