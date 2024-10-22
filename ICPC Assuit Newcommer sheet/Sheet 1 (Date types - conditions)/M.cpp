#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char ch;
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
    {
        printf("ALPHA\nIS SMALL");
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("ALPHA\nIS CAPITAL");
    }
    else
    {
        printf("IS DIGIT");
    }
    return 0;
}
