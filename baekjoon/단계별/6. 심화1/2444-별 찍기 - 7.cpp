#include<bits/stdc++.h>

using namespace std;

int n;

int main() {
    cin >> n;
    int m = 2*n - 1;
    for(int i=0; i<m; i++) { // row
        for(int j=0; j<m; j++) { // col
            if(j <= m / 2 && i <= m / 2) {
                if(i < -j+m/2) {
                    cout << " ";
                } else {
                    cout << "*";
                }
            } else if(j >= m / 2 && i <= m / 2) {
                if(i >= j-m/2) {
                    cout << "*";
                }
            } else if(j <= m / 2 && i >= m / 2) {
                if(i > j+m/2) {
                    cout << " ";
                } else {
                    cout << "*";
                }
            } else {
                if(i < -j+m*3/2) {
                    cout << "*";
                }
            }
        }
        cout << '\n';
    }
    return 0;
}
