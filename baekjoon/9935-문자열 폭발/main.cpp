#include<bits/stdc++.h>

using namespace std;

string a, b;
stack<char> st;
int pt;

int main() {
    cin >> a >> b;

    for(char c: a) {
        st.push(c);

        if(c == b[pt]) {
            pt++;
        } else {
            pt = 0;
        }

        if(b.size() == pt) {
            for(int i=0; i<b.size(); i++) {
                st.pop();
            }
            pt=0;
        }
    }
    cout << a << endl;
    cout << b << endl;

    return 0;
}
