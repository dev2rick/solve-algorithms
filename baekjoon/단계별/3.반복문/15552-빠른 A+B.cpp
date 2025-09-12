#include<bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    
    int k, a, b;
    
    cin >> k;
    for(int i=0; i<k; i++) {
        cin >> a >> b;
        cout << a+b << "\n";
    }
    
    return 0;
}
