#include <bits/stdc++.h>

#define Osama                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

using namespace std;

int main(void)
{
    long long *arr = (long long *)malloc(10000 * sizeof(long long)); // DYNAMIC  MEMORY ALLOCATION //
    int sizee;
    cin >> sizee;
    int startt, endd;
    arr = (long long *)realloc(arr, sizee * sizeof(long long));
    for (int i = 0; i < sizee; i++)
    {
        cin >> *(arr + i);
    }
    endd = *(arr + sizee - 1);
    startt = *(arr);
    for (int i = 0; i <= sizee / 2; i++)
    {
        if (startt == endd)
        {
            startt = *(arr + i);
            endd = *(arr + sizee - i - 1);
        }
        else
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
