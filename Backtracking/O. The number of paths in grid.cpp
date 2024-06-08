#include <iostream>
#include <vector>
#include<algorithm>
#define ll long long
using namespace std;

vector<vector<ll>> v1; // To store all paths
vector<ll> v2;         // To store the current path

void Cal(vector<vector<ll>> v, vector<vector<bool>>& visited, ll i, ll j, ll n, ll m) {
    // base case 
  
    if (i >= n || j >= m || i<0 || j<0) {
        return;
    }
    if (v[i][j] == 0 || visited[i][j]) {
        return;
    }
    if (i == n - 1 && j == m - 1) {
        v2.push_back(v[i][j]);
        v1.push_back(v2);
        v2.pop_back();
        return;
    }
    // transition
    visited[i][j] = true;
    v2.push_back(v[i][j]);
    Cal(v, visited,i + 1, j, n, m);
    Cal(v, visited,i, j + 1, n, m);
    Cal(v, visited,i - 1, j, n, m);
    Cal(v, visited,i, j - 1, n, m);
    v2.pop_back(); // Clean up before returning
    visited[i][j] = false; // Unmark the current cell
}

int main() {
    ll t;
    cin >> t;
    ll a;
    cin >> a;
    vector<vector<ll>> v(t, vector<ll>(a));
    for (ll i = 0; i < t; i++) {
        for (ll j = 0; j < a; j++) {
            cin >> v[i][j];
        }
    }
    vector<vector<bool>> v3(t, vector<bool>(a,false));
    Cal(v, v3,0, 0, t, a);
    // Output v1
    cout << v1.size();

    return 0;
}
