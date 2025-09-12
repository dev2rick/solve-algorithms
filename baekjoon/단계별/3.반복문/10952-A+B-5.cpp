#include<bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(NULL);
    cin.sync_with_stdio(NULL);
    
    int a,b;
    
    while(1) {
        cin >> a >> b;
        
        if(a == 0 && b == 0) break;
        
        cout << a+b <<'\n';
    }
    
    return 0;
}
