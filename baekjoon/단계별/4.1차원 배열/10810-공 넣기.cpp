#include<bits/stdc++.h>

using namespace std;

int v[104], n, k;

int main() {
    cin >> n >> k;
    
    for(int i=0; i<k; i++) {
        
        int l, r, a;
        
        cin >> l >> r >> a;
        
        for(int j=l; j<=r; j++) {
            v[j] = a;
        }
    }
    
    for(int i=1; i<=n; i++) {
        cout << v[i] << " ";
    }
    
    return 0;
}
