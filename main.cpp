#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n ;
    cin >> n ;
    while(n--)
    {
        string a ;
        cin >> a ;
        int b = a.size();
        if(b>10)
        {
            cout << a[0] << b - 2 << a[b - 1] << endl;
        }
        else
        {
            cout << a << endl ;
        }
    }

    return 0;
}
