#include<bits/stdc++.h>

using namespace std;

int v[7], a;

int main() {
    
    for(int i=0; i<3; i++) {
        cin >> a;
        v[a]++;
    }
    
    int max = 0;
    for(int i=1; i<7; i++) {
        if (v[i] == 3) {
            cout << 10000 + i * 1000 << endl;
            return 0;
        } else if (v[i] == 2) {
            cout << 1000 + i * 100 << endl;
            return 0;
        } else if (v[i] == 1) {
            max = i;
        }
    }
    cout << max * 100 << endl;
    return 0;
}
