#include <iostream>
#include <vector>
#define ll long long
using namespace std;
 
int LIS(vector<int>v,int i,int last) {
    if (i == v.size()) {
        return 0;
    }
    int take = 0;
    int leave = LIS(v,i+1,last);
    if (v[i] >last) { 
    take = 1 + LIS(v, i + 1, v[i]); }
    return max(leave, take);
    
 
}
int main() {
    ll t;
    cin >> t;
    vector<int> v(t);
    for (ll i = 0; i < t; i++) cin >> v[i];
    cout << LIS(v, 0,0);
    return 0;
}