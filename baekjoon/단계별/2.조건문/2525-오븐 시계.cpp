#include<bits/stdc++.h>

using namespace std;

int main() {
    int h, m, d;
    
    cin >> h >> m >> d;
    
    if (m + d >= 60) {
        int hour = (h + ((m+d) / 60)) % 24;
        
        cout << hour << " " << (m+d) % 60 << endl;
    } else {
        cout << h << " " << m+d << endl;
    }
    return 0;
}
