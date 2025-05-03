#include<bits/stdc++.h>


using namespace std;

int main() {
    int n = 20;

    int idx = n & (-n);
    cout << idx << endl;
    return 0;
}
