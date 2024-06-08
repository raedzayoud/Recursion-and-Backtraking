#include <iostream>
#include <vector>
#include<set>
using namespace std;
 
int Knapsack(int sumWeight,vector<int>n, vector<int>w,int size,int maxWeight, int sumIndices,int y) {
	//base case
	if (sumIndices == maxWeight) {
		return sumWeight;
	}
	if (size == y) {
		return sumWeight;
	}
	//transition
	int left = INT_MIN;
	int right = INT_MIN;
	if(sumIndices<=maxWeight)
	left = Knapsack(sumWeight,n,w,size,maxWeight, sumIndices,y+1);
	if (sumIndices+n[y] <= maxWeight)
	right = Knapsack(sumWeight+w[y], n, w, size, maxWeight, sumIndices + n[y],y + 1);
	return max(left, right);
}
 
 
 
 
int main() {
 
	int x, width;
	cin >> x >> width;
	vector<int>n(x);
	vector<int>w(x);
	for (int i = 0; i < x; i++) {
		cin >> n[i];
		cin >> w[i];
	}
	cout<<Knapsack(0, n, w, x, width, 0, 0);
 
 
 
	
}