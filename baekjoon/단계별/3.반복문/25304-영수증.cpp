#include<bits/stdc++.h>

using namespace std;

int t, k, sum;
int main() {
    int p, n;
    
    cin >> t >> k;
    
    for(int i=0; i<k; i++) {
        cin >> p >> n;
        sum += p*n;
    }
    
    string res = t == sum ? "Yes" : "No";
    
    cout << res << endl;
    
    return 0;
}
