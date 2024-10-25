#include <bits/stdc++.h>

#define Osama                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

using namespace std;

int main(void)
{
    Osama int n;
    int *arr = (int *)malloc(1000 * sizeof(int));
    cin >> n;
    arr = (int *)realloc(arr, n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        cin >> *(arr + i);
        if (*(arr + i) > 0)
        {
            *(arr + i) = 1;
        }
        else if (*(arr + i) < 0)
        {
            *(arr + i) = 2;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }
    return 0;
}
