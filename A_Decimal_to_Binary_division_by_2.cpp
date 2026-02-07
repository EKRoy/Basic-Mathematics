#include <bits/stdc++.h>
#define ll long long
using namespace std;

string decToBinary(int n)
{
    if(n==0) return "0";
    string bin = "";
    while (n > 0)
    {
       ll bit = n % 2;
        bin.push_back('0' + bit);
        n /= 2;
        // n>>=1; this is bitwise
    }
    reverse(bin.begin(), bin.end());
    return bin;
}

int main()
{
   ll n ;
   cin>>n;
    cout << decToBinary(n);
    return 0;
}