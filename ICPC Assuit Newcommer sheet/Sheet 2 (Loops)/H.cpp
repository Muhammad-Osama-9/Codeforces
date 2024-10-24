#include <iostream>
using namespace std;

int main(void)
{
    long long num, counter = 0;
    cin >> num;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            counter++;
    }
    cout << (counter == 0 ? "YES" : "NO");
    return 0;
}
