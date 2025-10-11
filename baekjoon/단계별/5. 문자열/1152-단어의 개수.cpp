#include<bits/stdc++.h>

using namespace std;

vector<string> split(const string& input, string delimiter) {
    vector<string> result;
    auto start = 0;
    auto end = input.find(delimiter);
    while (end != string::npos) {
        result.push_back(input.substr(start, end - start));
        start = end + (int) delimiter.size();
        end = input.find(delimiter, start);
    }
    result.push_back(input.substr(start));
    return result;
}

string trimWhitespace(const string& input) {
    string res = input;
    
    while(res.size() && res[0] == ' ') {
        res = res.substr(1);
    }
    
    while(res.size() && res[res.size() - 1] == ' ') {
        res = res.substr(0, res.size() - 1);
    }
    
    return res;
}

int main() {
    string s;
    getline(cin, s);
    string clearString = trimWhitespace(s);
    if(clearString.size()) {
        cout << split(clearString, " ").size() << '\n';
    } else {
        cout << 0 << '\n';
    }
    
    return 0;
}
