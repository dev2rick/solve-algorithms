#include<bits/stdc++.h>

using namespace std;

int v[42], a, cnt;

int main() {
    for(int i=0; i<10; i++) {
        cin >> a;
        int remain = a % 42;
        v[remain]++;
    }
    
    for(int i=0; i<42; i++) {
        if(v[i]) cnt++;
    }
    
    cout << cnt;
    return 0;
}
