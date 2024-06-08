#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int Cal(vector<vector<ll>> v,int i,int j,int n,int m) {
    // base case 
    if (i >=n || j >=m) {
        return -1e7;
    }
    if (i == n-1 && j == m-1) {
        return v[i][j];
    }
    // transition
    int left = v[i][j]+Cal(v,i+1,j,n,m);
    int right = v[i][j] + Cal(v, i, j+1, n, m);
    return max(left, right);
}

int main() {
    ll t;
    cin >> t;
    ll a;
    cin >> a;
    vector<vector<ll>> v(t,vector<ll>(a));
    for (ll i = 0; i < t; i++) {
        for (ll j = 0; j < a; j++) {
            cin >> v[i][j];
        }
    }
    cout << Cal(v, 0, 0, t, a);
    return 0;
}
