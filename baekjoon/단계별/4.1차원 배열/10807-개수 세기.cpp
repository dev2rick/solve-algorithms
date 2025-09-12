#include<bits/stdc++.h>

using namespace std;

int v[204], k, a, res;

int main() {
    cin >> k;
    
    for(int i=0; i<k; i++) {
        cin >> a;
        v[a+100]++;
    }
    cin >> res;
    cout << v[res+100] << '\n';
    
    return 0;
}
