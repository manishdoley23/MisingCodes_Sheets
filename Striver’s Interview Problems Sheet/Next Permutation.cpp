//https://leetcode.com/problems/next-permutation/

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = n-2;
        for(;i>=0; --i){
            if(nums[i+1] > nums[i]) break;
        }
        if(i < 0){
            reverse(nums.begin(), nums.end());
        }else{
            int j = n-1;
            for(; j>i; --j){
                if(nums[j] > nums[i]) break;
            }
            swap(nums[j], nums[i]);
            reverse(nums.begin() + i + 1, nums.end());
        }
    }
};
