#include <iostream>
using namespace std;

int main()
{
    long long num;
    long long result;
    cin >> num;

    result = (num + 1) * (num / 2) + (num % 2) * ((num / 2) + 1);
    cout << result;
}
