#include<bits/stdc++.h>

using namespace std;

string s;
int res, t;
int main() {
    cin >> t >> s;
    
    for(char c: s) {
        res += c - '0';
    }
    
    cout << res << '\n';
    return 0;
}
