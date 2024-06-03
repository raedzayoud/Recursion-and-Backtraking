class Solution {
public:
    
void Backtrack(vector<vector<int>>& v1, vector<int>& nums, vector<int>& v, int start) {
    for (int i = start; i < nums.size(); i++) {
        v.push_back(nums[i]);
        v1.push_back(v);
        Backtrack(v1, nums, v, i + 1);
        v.pop_back();
    }
}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> v1;
    vector<int> v;
    v1.push_back(v); // Include the empty subset
    Backtrack(v1, nums, v, 0);
    return v1;
}
};