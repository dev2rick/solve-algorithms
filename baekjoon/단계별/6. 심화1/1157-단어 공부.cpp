#include<bits/stdc++.h>

using namespace std;

int v[30], mx;
int res = -1;
int main() {
    string s;
    cin >> s;
    for(char c: s) {
        if(c < 'a') {
            v[c - 'A']++;
        } else {
            v[c - 'a']++;
        }
    }
    
    for(int i=0; i<26; i++) {
        if(mx < v[i]) {
            mx = v[i];
        }
    }
    
    for(int i=0; i<26; i++) {
        if(mx == v[i]) {
            if(res == -1) {
                res = i;
            } else {
                cout << '?' << endl;
                return 0;
            }
        }
    }
    
    cout << (char) ('A' + res) << endl;
    return 0;
}
