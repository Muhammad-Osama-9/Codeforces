#include <iostream>
using namespace std;
int main(void)
{
    long long num1, num2;
    cin >> num1 >> num2;
    if (num1 - num2 >= 0)
    {
        cout << num1 - num2;
    }
    else
    {
        cout << 0;
    }
}