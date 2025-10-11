#include<bits/stdc++.h>

using namespace std;

int k, n;
string s;

int main() {
    
    cin >> k;
    
    while(k) {
        k--;
        
        cin >> n >> s;
        string res = "";
        for(int i=0; i<s.length(); i++) {
            for(int j=0; j<n; j++) {
                res += s[i];
            }
        }
        cout << res << '\n';
    }
    
    return 0;
}
