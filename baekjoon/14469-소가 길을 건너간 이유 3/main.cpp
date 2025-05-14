#include<bits/stdc++.h>

using namespace std;

int n;

int main() {
    cin >> n;

    vector<pair<int, int>> v(n);

    for(int i=0; i<n; i++) {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end());

    int start = v[0].first;
    int end = start + v[0].second;

    for(int i=1; i<n; i++) {
        start = max(end, v[i].first);
        end = start + v[i].second;
    }

    cout << end << '\n';
    return 0;
}
