#include<bits/stdc++.h>

using namespace std;

int mp,mf,ms,mv;
int pi[20], fi[20], si[20], vi[20], ci[20];
int n, res;
int p,f,s,v,c;
vector<int> resV;
int main() {
    cin >> n;
    cin >> mp >> mf >> ms >> mv;

    for(int i=0; i<n; i++) {
        cin >> pi[i] >> fi[i] >> si[i] >> vi[i] >> ci[i];
    }

    for(int i=0; i<n; i++) {
        p += pi[i];
        f += fi[i];
        s += si[i];
        v += vi[i];
        c += ci[i];
    }
    res = c;

    if(mp > p || mf > f || ms > s || mv > v) {
        cout << -1 << '\n';
        return 0;
    }
 
    for(int i=0; i < 1<<n; i++) {
        vector<int> idx;
        int tp=0, tf=0, ts=0, tv=0, tc=0;
        for(int j=0; j<n; j++) {
            if(i & 1<<j) {
                idx.push_back(j);
            }
        }

        for(int j=0; j<idx.size(); j++) {
            int i = idx[j];
            tp += pi[i];
            tf += fi[i];
            ts += si[i];
            tv += vi[i];
            tc += ci[i];
        }

        if(mp <= tp && mf <= tf && ms <= ts && mv <= tv) {
            if(res > tc) {
                res = tc;
                resV = idx;
            }
        }
    }

    cout << res << '\n';
    for(int i=0; i<resV.size(); i++) {
        int r = resV[i];
        cout << r + 1 << " ";
    }
    cout << '\n';
    return 0;
}
