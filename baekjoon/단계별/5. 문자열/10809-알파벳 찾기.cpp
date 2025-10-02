#include<bits/stdc++.h>

using namespace std;

int v[26];
string s;
int main() {
    fill(v, v+26, -1);
//    memset(&v, -1, sizeof(int) * 26);
    cin >> s;
    for(int i=0; i<s.length(); i++) {
        int a = s[i] - 'a';
        if(v[a] == -1) {
            v[a] = i;
        }
    }
    
    for(int i=0; i<26; i++) {
        cout << v[i] << ' ';
    }
    
    return 0;
}
