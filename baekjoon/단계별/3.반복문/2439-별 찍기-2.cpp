#include<bits/stdc++.h>

using namespace std;

int main() {
    int k;
    cin >> k;
    
    for(int i=1; i<=k; i++) {
        for(int j=0; j<k; j++) {
            char c = k-i > j ? ' ' : '*';
            cout << c;
        }
        cout << "\n";
    }
    return 0;
}
