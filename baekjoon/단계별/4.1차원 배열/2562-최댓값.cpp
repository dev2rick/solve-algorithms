#include<bits/stdc++.h>

using namespace std;
int mx, input, idx;
int main() {
    for(int i=0; i<9; i++) {
        cin >> input;
        if(input > mx) {
            mx = input;
            idx = i;
        }
    }
    
    cout << mx << '\n';
    cout << idx+1 << '\n';
    return 0;
}
