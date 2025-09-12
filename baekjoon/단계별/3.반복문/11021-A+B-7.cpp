#include<bits/stdc++.h>

using namespace std;

int main() {
    int k, a, b;
    cin >> k;
    
    for(int i=0; i<k; i++) {
        cin >> a >> b;
        cout << "Case #" << i+1 << ": " << a+b << "\n";
    }
    return 0;
}
