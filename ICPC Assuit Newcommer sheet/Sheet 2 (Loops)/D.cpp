#include <bits/stdc++.h>
using namespace std;
int main(void)
{

    int pass_in;
    while (1)
    {
        cin >> pass_in;
        if (pass_in == 1999)
        {
            cout << "Correct";
            break;
        }
        else
        {
            cout << "Wrong\n";
        }
    }

    return 0;
}
