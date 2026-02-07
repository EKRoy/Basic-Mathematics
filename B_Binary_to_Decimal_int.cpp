#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll binaryToDecimal(int n)
{
    ll num = n;
    ll dec_value = 0;

    // Initializing base value to 1, i.e 2^0
    ll base = 1;
    ll temp = num;
    while (temp)
    {
        ll last_digit = temp % 10;
        temp = temp / 10;

        dec_value += last_digit * base;

        base = base * 2;
    }
    return dec_value;
}
int main()
{
    ll num ; cin>>num;

    cout << binaryToDecimal(num) << endl;
}