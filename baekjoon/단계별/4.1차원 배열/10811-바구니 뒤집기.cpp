#include<bits/stdc++.h>

using namespace std;

int v[104], n, k;

void rev(int l, int r) {
    int tmp;
    for(int i=l; i<=(r+l)/2; i++) {
        tmp = v[i];
        v[i] = v[l+r-i];
        v[l+r-i] = tmp;
    }
}

int main() {
    cin >> n >> k;
    
    for(int i=1; i<=n; i++) {
        v[i] = i;
    }
    
    int l, r;
    for(int i=0; i<k; i++) {
        cin >> l >> r;
        rev(l, r);
    }
    
    for(int i=1; i<=n; i++) {
        cout << v[i] << " ";
    }
    
    return 0;
}
