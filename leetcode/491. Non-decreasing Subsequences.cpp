class Solution {
public:
   set<vector<int>>v;

void Backtarck(vector<int>nums, vector<int>& a, int start) {
    for (int i = start; i < nums.size(); i++) {
        if (a.empty() || nums[i] >= a.back()) {
            a.push_back(nums[i]);
            Backtarck(nums, a, i + 1);
            v.insert(a);
            a.pop_back();
        }
    }

}

    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<vector<int>> t;
       vector<int>a;
       Backtarck(nums, a, 0);
         for (vector<int> s1 : v) {
      if (s1.size() > 1) {
            t.push_back(s1);
      }
      }
        return t;
    }
};