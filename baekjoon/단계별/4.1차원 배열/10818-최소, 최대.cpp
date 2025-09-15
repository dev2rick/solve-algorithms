#include<bits/stdc++.h>

using namespace std;

int n, p;
int mx = -1000001;
int mn = 1000001;

int main() {
    
    cin >> n;
    
    for(int i=0; i<n; i++) {
        cin >> p;
        if(p > mx) {
            mx = p;
        } else if (p < mn) {
            mn = p;
        }
    }
    cout << mn << " " << mx;
    return 0;
}
