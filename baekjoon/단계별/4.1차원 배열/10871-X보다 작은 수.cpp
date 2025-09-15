#include<bits/stdc++.h>

using namespace std;

int a, n, x;

int main() {
    cin >> n >> x;
    
    for(int i=0; i<n; i++) {
        cin >> a;
        if(a < x) {
            cout << a << " ";
        }
    }
    
    return 0;
}
