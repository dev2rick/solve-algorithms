#include<bits/stdc++.h>

using namespace std;
int main() {
    string v[8] = {"c=","c-", "dz=", "d-", "lj", "nj", "s=", "z="};

    string s;
    cin >> s;

    int index;

    for (int i = 0; i < 8; i++) {

        while (1) {
            index = s.find(v[i]);
            if (index == string::npos)
                break;
            s.replace(index, v[i].length(), "a");
        }
    }

    cout << s.size();
    return 0;
}
