#include<bits/stdc++.h>

using namespace std;

string s;
int res;

int main() {
    cin >> s;
    
    for(char c: s) {
        int v = c - 'A';
        if(v == 25) {
            res += 10;
        } else if(v > 17) {
            res += (v - 1) / 3 + 3;            
        } else {
            res += v / 3 + 3;
        }
    }
    cout << res << '\n';
    
    return 0;
}
