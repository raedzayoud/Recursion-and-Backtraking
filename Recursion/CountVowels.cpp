#include <iostream>
#include <vector>
#include<set>
#include<string>
using namespace std;
int nb = 0;
set<vector<int>>st;
vector<int>v;
 
int MaxiumTable(string s,int i) {
 
	if (s.size() == i) {
		return 0;
	}
 
	int left = MaxiumTable(s,i+1);
 
	if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
		s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
 
		return left + 1;
 
	}
	else {
		return left;
	}
 
}
 
 
 
int main() {
	
	string s;
	getline(cin, s);
	cout << MaxiumTable(s, 0);
	
}