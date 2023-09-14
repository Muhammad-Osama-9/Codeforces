#include <bits/stdc++.h>
#include <cmath>
using namespace std ;

#define Muhammad_Osama ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define NEW_LINE cout << "\n" ;
void print (int n )
{
    cout << "I love Recursion"<< "\n";
    if (n>1)
    {
        print(n-1);

    }
    else {
        return ;
    }
}
int main () {
int n ;
cin >> n  ;
print(n) ;

    return 0;
}
