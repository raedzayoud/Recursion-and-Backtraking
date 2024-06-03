class Solution {
public:
    void Backtrack(vector<vector<int>>&v1,int n,vector<int>&v,vector<int>nums,vector<bool>test){
        if(n==v.size()){
            v1.push_back(v);
            return;
        }
        for(int i=0;i<n;i++){
            if(test[i]){
                continue;
            }
            v.push_back(nums[i]);
            test[i]=true;
            Backtrack(v1,n,v,nums,test);
            v.pop_back();
            test[i]=false;

        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>v1;
        vector<int>v;
        vector<bool>test(nums.size(),0);
        Backtrack(v1,nums.size(),v,nums,test);
        return v1;
    }
};