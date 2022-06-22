//https://leetcode.com/problems/minimum-difference-between-largest-and-smallest-value-in-three-moves/

class Solution {
public:
    int minDifference(vector<int>& nums) {
        if(nums.size() <= 4) return 0;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int c1 = nums[n-4] - nums[0];
        int c2 = nums[n-3] - nums[1]; 
        int c3 = nums[n-2] - nums[2];
        int c4 = nums[n-1] - nums[3];
        return min(c1, min(c2, min(c3, c4)));
    }
};
