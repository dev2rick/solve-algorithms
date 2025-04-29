#include<bits/stdc++.h>

using namespace std;

int a, b;
int visited[100004];
int cnt[100004];

int main() {
    cin >> a >> b;

    if(a == b) {
        cout << 0 << endl;
        cout << 1 << endl;
        return 0;
    }
    cnt[a] = 1;
    visited[a] = 1;
    queue<int> q;
    q.push(a);

    while(q.size()) {
        int x = q.front();
        q.pop();

        for(int nx: {x-1, x+1, 2*x}) {
            if(nx >= 0 && nx <= 100000) {
                if(!visited[nx]) {
                    visited[nx] = visited[x] + 1;
                    cnt[nx] += cnt[x];
                    q.push(nx);
                } else if(visited[nx] == visited[x] + 1) {
                    cnt[nx] += cnt[x];
                }
            }
        }
    }

    cout << visited[b] - 1 << endl;
    cout << cnt[b] << endl;
    return 0;
}
