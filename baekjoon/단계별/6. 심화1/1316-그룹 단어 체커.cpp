#include<bits/stdc++.h>

using namespace std;

int k, res;

bool checker(const string s) {
    int a[26];
    fill(a, a+26, 0);
    
    a[s[0] - 'a']++;
    for(int i=1; i<s.length(); i++) {
        int idx = s[i] - 'a';
        if(a[idx] > 0 && s[i-1] != s[i]) {
            return false;
        } else {
            a[idx]++;
        }
    }
    return true;
}

int main() {
    cin >> k;
    
    for(int i=0; i<k; i++) {
        string s;
        cin >> s;
        
        if(checker(s)) res++;
    }
    cout << res << '\n';
    
    return 0;
}
