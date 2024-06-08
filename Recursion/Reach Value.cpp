#include <iostream>
#include <vector>
#include<set>
using namespace std;
 
 
bool Backtrack(long long i, long long x) {
    if (i == x) {
        return true;
    }
    if (i  > x) {
        return false;
    }
   return  Backtrack(i*10,x) || Backtrack(i * 20, x);
}
 
 
 
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a;
        cin >> a;
        if (Backtrack(1, a)) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}