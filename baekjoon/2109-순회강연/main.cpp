#include<bits/stdc++.h>

using namespace std;

int n, res;
vector<pair<int, int>> v;
priority_queue<int, vector<int>, greater<int>> pq;

int main() {

    cin >> n;
    for(int i=0; i<n; i++) {
        int p, d;
        cin >> p >> d;
        v.push_back({d, p});
    }

    sort(v.begin(), v.end());

    for(int i=0; i<n; i++) {
        int d,p;
        tie(d, p) = v[i];
        pq.push(p);
        if(pq.size() > d) {
            pq.pop();
        }
    }

    while(pq.size()) {
        res += pq.top();
        pq.pop();
    }

    cout << res <<'\n';
    return 0;
}
