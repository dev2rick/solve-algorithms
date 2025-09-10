#include <bits/stdc++.h>

using namespace std;

int main() {
    int input;
    cin >> input;
    
    if(input >= 90) {
        cout << "A\n";
    } else if(input >= 80 && input < 90) {
        cout << "B\n";
    } else if(input >= 70 && input < 80) {
        cout << "C\n";
    } else if(input >= 60 && input < 70) {
        cout << "D\n";
    } else {
        cout << "F\n";
    }
    
    return 0;
}
