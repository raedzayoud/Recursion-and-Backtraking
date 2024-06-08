#include <iostream>
#include <vector>
#include<set>
using namespace std;
int nb = 0;
set<vector<int>>st;
vector<int>v;
 
void Cal(int x, int y) {
	if (x > y) {
		return;
	}
	//base case
	if (x == y) {
		nb++;
		return ;
	}
 
	Cal(x + 1, y);
	Cal(x + 2, y);
	Cal(x + 3, y);
	
 
}
 
 
 
int main() {
 
	int x, width;
	cin >> x >> width;
	Cal(x, width);
	cout << nb;
 
 
 
	
}