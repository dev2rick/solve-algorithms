#include<bits/stdc++.h>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int a1 = stoi(a.c_str());
    int b1 = stoi(b.c_str());
    if(a1 > b1){
        cout << a1 << '\n';
    } else {
        cout << b1 << '\n';
    }
    
    return 0;
}
