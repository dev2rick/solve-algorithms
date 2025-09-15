#include<bits/stdc++.h>

using namespace std;

int v[1004], n, mx;

int main() {
    
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> v[i];
        if(mx < v[i]) mx = v[i];
    }
    double sum = 0;
    
    for(int i=0; i<n; i++) {
        sum += (double) v[i] / mx * 100;
    }
    
    cout << sum / n << endl;
    
    return 0;
}
