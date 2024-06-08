#include <iostream>
#include <vector>
#include<algorithm>
#define ll long long
using namespace std;

vector<vector<ll>> v1; // To store all paths
vector<ll> v2;         // To store the current path

void Cal(vector<vector<ll>> v, int i, int j, int n, int m) {
    // base case 
    if (i >= n || j >= m) {
        return;
    }
    if (i == n - 1 && j == m - 1) {
        v2.push_back(v[i][j]);
        v1.push_back(v2);
        v2.pop_back();
        return;
    }
    // transition
    v2.push_back(v[i][j]);
    Cal(v, i + 1, j, n, m);
    Cal(v, i, j + 1, n, m);
    v2.pop_back(); // Clean up before returning
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
    Cal(v, 0, 0, t, a);
    sort(v1.begin(), v1.end());
    // Output v1
    for (vector<ll>a : v1) {
        for (int i = 0; i < a.size(); i++) {
            cout << a[i] << " ";
        }
        cout << endl;

   }

    return 0;
}
