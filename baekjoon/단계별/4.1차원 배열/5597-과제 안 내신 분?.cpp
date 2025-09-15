#include<bits/stdc++.h>

using namespace std;

int v[34], a;

int main() {
    for(int i=0; i<28; i++) {
        cin >> a;
        v[a]++;
    }
    
    for(int i=1; i<=30; i++) {
        if(!v[i]) {
            cout << i << '\n';
        }
    }
    
    return 0;
}
