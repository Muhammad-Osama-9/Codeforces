#include <bits/stdc++.h>

#define Osama                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

using namespace std;

int main(void)
{
    int *arr = (int *)malloc(1000 * sizeof(int)); // DYNAMIC  MEMORY ALLOCATION //
    int sizee;
    cin >> sizee;
    arr = (int *)realloc(arr, sizee * sizeof(int));
    for (int i = sizee - 1; i >= 0; i--)
    {
        cin >> *(arr + i);
    }
    for (int i = 0; i < sizee; i++)
    {
        printf("%d ", *(arr + i));
    }
    // free(arr) ;

    return 0;
}
