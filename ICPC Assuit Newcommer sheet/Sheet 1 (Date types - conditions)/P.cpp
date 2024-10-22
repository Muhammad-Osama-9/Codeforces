#include <iostream>

using namespace std;

int main()
{
    int num1;
    cin >> num1;
    num1 = num1 / 1000;
    if (num1 % 2 == 0)
    {
        cout << "EVEN";
    }
    else
    {
        cout << "ODD";
    }
    return 0;
}
