#include <bits/stdc++.h>

using namespace std;
#define Muhammad_Osama ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int main()
{
    Muhammad_Osama
        string input;
    long long out = 0;
    getline(cin, input);
    transform(input.begin(), input.end(), input.begin(), ::tolower);
    sort(input.begin(), input.end());

    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] == 'a' || input[i] == 'e' || input[i] == 'o' || input[i] == 'i' || input[i] == 'u')
        {
            out++;
        }
    }
    cout << out;
    return 0;
}