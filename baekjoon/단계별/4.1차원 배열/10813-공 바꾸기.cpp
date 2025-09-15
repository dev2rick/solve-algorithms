#include<bits/stdc++.h>

using namespace std;

int v[104], n, k;

int main() {
    
    cin >> n >> k;
    
    for(int i=1; i<=n; i++) {
        v[i] = i;
    }
    
    for(int i=0; i<k; i++) {
        int a, b, tmp;
        cin >> a >> b;
        
        tmp = v[a];
        v[a] = v[b];
        v[b] = tmp;
    }
    
    for(int i=1; i<=n; i++) {
        cout << v[i] << " ";
    }
    
    return 0;
}
