#include<bits/stdc++.h>

using namespace std;

int n, res;
vector<pair<int, int>> v;
int visited[10005];
bool comp(pair<int, int> a, pair<int, int> b) {
    if(a.first == b.first) {
        return a.second > b.second;
    }
    return a.first < b.first;
}

int main() {


    cin >> n;
    for (int i =0; i<n; i++) {
        int a,b;
        cin >> a >> b;
        v.push_back({b, a});
    }

    sort(v.begin(), v.end(), comp);

    for (int i =0; i<n; i++) {
        int idx = v[i].first;
        if(!visited[idx]) {
            visited[idx] = 1;
            res += v[i].second;
        }
    }

    cout << res << endl;
}
