//https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int, int> umap;
        for(int i=0; i<nums.size(); ++i){
            int reqSum = target - nums[i];
            if(umap.count(reqSum)){
                ans.push_back(umap[reqSum]);
                ans.push_back(i);
            }
            umap[nums[i]] = i;
        }
        return ans;
    }
};
