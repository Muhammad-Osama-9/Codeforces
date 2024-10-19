#include <iostream>

using namespace std;

int main(void)
{
    char c;
    cin >> c;
    cout << (c == 'z' ? 'a' : ++c);
    return 0;
}