#include <iostream>
using namespace std;

int main(void)
{
    int test;
    long long num;
    unsigned long long res = 1;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        cin >> num;
        for (int i = 2; i <= num; i++)
            res = res * i;
        cout << res << endl;
        res = 1;
    }
    return 0;
}
