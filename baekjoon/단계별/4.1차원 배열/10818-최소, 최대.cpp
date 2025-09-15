#include<bits/stdc++.h>

using namespace std;

int mx, mn, n, p;

int main() {
    
    cin >> n;
    
    for(int i=0; i<n; i++) {
        cin >> p;
        if(i==0) {
            mx = p;
            mn = p;
        }
        
        if(p > mx) {
            mx = p;
        } else if (p < mn) {
            mn = p;
        }
    }
    cout << mn << " " << mx;
    return 0;
}
