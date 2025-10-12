#include<bits/stdc++.h>

using namespace std;

int v[] = {1, 1, 2, 2, 2, 8};

int main() {
    int a = 0;
    
    for(int i=0; i<6; i++) {
        cin >> a;
        cout << v[i] - a << ' ';
    }
    
    return 0;
}
