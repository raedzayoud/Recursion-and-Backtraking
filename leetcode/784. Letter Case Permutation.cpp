#include <vector>
#include <string>
#include <set>

using namespace std;

class Solution {
public:
    set<string> v;

void Backtrack(string& s, string& origi, int start) {
    if (start == origi.size()) {
        v.insert(s);
        return;
    }
    s.push_back(origi[start]);
    Backtrack(s, origi, start + 1);
    s.pop_back();
    if (!isdigit(origi[start])) {
        char x = origi[start];
        if (islower(origi[start])) {
            origi[start] = toupper(origi[start]);
        }
        else if (isupper(origi[start])) {
            origi[start] = tolower(origi[start]);
        }

        s.push_back(origi[start]);
        Backtrack(s, origi, start + 1);
        s.pop_back();
        origi[start] = x;
    }
}

vector<string> letterCasePermutation(string s) {
    vector<string> l;
    string k = "";
    v.clear();  // Clear the set to ensure no previous results are present
    Backtrack(k, s, 0);
    for (set<string>::iterator it = v.begin(); it != v.end(); it++) {
        l.push_back(*it);
    }
    return l;
}
};
