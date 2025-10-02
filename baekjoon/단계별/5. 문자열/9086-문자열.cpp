#include<bits/stdc++.h>

using namespace std;



int main() {
    int t;
    string s;
    
    cin >> t;
    
    while(t) {
        t--;
        cin >> s;
        cout << *s.begin() << *(s.end()-1) << endl;
    }
    
    return 0;
}
