#include<bits/stdc++.h>

using namespace std;

int n, res;
priority_queue<int, vector<int>, greater<int>> pq;
vector<pair<int, int>> v;
int main() {
    cin >> n;

    for(int i=0; i<n; i++) {
        int d, p;
        cin >> d >> p;
        v.push_back({d, p});
    }

    sort(v.begin(), v.end());

    for(int i=0; i<n; i++) {
        pq.push(v[i].second);
        if(pq.size() > v[i].first) {
            pq.pop();
        }
    }

    while(pq.size()) {
        res+=pq.top();
        pq.pop();
    }

    cout << res << '\n';
    return 0;
}
