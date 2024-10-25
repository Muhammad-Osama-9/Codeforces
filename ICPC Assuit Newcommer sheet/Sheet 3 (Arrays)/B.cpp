#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int num_search;
    int *ptr = (int *)malloc(100000 * (sizeof(int)));
    int n;
    cin >> n;
    ptr = (int *)realloc(ptr, n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        cin >> *(ptr + i);
    }
    cin >> num_search;
    for (int i = 0; i < n; i++)
    {
        if (num_search == *(ptr + i))
        {
            cout << i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}
