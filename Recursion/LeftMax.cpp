#include <iostream>
#include <vector>
#include<set>
#define ll long long
using namespace std;

vector<int>a;

void Backtrack(vector<ll>v1, long long max1,ll start) {
    
    
    if (start == v1.size()) {
        return;
    }

    ll current = max(max1, v1[start]);

    a.push_back(current);
    Backtrack(v1,current,start+1);
    
    
   
}

int main() {
    int t;
    cin >> t;
    vector<ll>v(t);
    for (ll i = 0; i < t; i++) cin >> v[i];
    a.push_back(v[0]);
    Backtrack(v, v[0], 1);
    for (ll i : a) {
        cout << i << " ";
    }
    return 0;
}
