#include<bits/stdc++.h>

using namespace std;

int main() {
    
    map<string, double> mp;
    mp["A+"] = 4.5;
    mp["A0"] = 4.0;
    mp["B+"] = 3.5;
    mp["B0"] = 3.0;
    mp["C+"] = 2.5;
    mp["C0"] = 2.0;
    mp["D+"] = 1.5;
    mp["D0"] = 1.0;
    mp["F"] = 0.0;
    
    string s, deg;
    double v;
    double total = 0.0;
    double totalScore = 0.0;
    
    for (int i=0; i<20; i++) {
        cin >> s >> v >> deg;
        if(deg == "P") continue;
        
        double score = mp.find(deg) -> second;
        
        totalScore += v * score;
        total += v;
    }
    
    cout << totalScore / total << endl;
    return 0;
}
