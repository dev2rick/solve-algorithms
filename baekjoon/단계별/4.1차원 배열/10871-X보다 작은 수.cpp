#include<bits/stdc++.h>

using namespace std;

int v[10004], n, x;

int main() {
    cin >> n >> x;
    
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    
    for(int i=0; i<n; i++) {
        if(v[i] < x) {
            cout << v[i] << " ";
        }
    }
    
    return 0;
}
