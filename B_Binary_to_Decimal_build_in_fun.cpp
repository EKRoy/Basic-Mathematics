#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s; cin>>s;
    bitset<32> b(s);
    cout << b.to_ulong() << endl;

        // char binaryNumber[] = "1111111";
        // cout << stoi(binaryNumber, 0, 2); // 2 is base
        return 0;
}