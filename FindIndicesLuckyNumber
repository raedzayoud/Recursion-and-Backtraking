#include <iostream>
#include <vector>
#include<set>
#define ll long long
using namespace std;

void Cal(int indices, int number, int somme) {
    if (somme == number) {
        cout << indices;
        return;
    }
    if (somme > number) {
        return;
    }
    Cal(indices * 2 + 1, number, somme * 10 + 4);
    Cal(indices * 2 + 2, number, somme * 10 + 7);
}


int main() {
    int t;
    cin >> t;
    /*vector<ll>v(t);
    int a;
    cin >> a;
    for (ll i = 0; i < t; i++) cin >> v[i];*/
    Cal(0,t,0);
    
    
    return 0;
}
