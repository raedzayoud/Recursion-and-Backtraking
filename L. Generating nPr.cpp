#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;
 
vector<vector<int>> v1;
void Backtrack(vector<vector<int>>& v1, int nums, vector<int>& v, int maxSize) {
    if (v.size() == maxSize) {
        v1.push_back(v);
        return;
    }
    for (int i = 1; i <= nums; i++) { // Start from 1 to nums
        if (find(v.begin(), v.end(), i) == v.end()) {
            v.push_back(i);
            Backtrack(v1, nums, v, maxSize);
            v.pop_back();
        }
    }
}
 
int main() {
    ll x, y;
    cin >> x >> y;
    vector<int> v;
    Backtrack(v1, x, v, y);
    for (const vector<int>& a : v1) {
        for (int b : a) {
            cout << b << " ";
        }
        cout << endl;
    }
 
    return 0;
}