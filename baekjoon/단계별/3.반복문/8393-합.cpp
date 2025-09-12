#include<bits/stdc++.h>

using namespace std;

int sum(int k) {
    if(k == 0) {
        return k;
    }
    return sum(k-1) + k;
}

int main() {
    int k;
    cin >> k;
    cout << sum(k) << endl;
    return 0;
}
