#include <iostream>
using namespace std;
int main(void)
{
    int num1, num2;
    cin >> num1 >> num2;
    if (num1 == 0 && num2 == 0)
        cout << "NO";
    else if (num1 - num2 == 1 || num1 - num2 == -1 || num1 - num2 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}