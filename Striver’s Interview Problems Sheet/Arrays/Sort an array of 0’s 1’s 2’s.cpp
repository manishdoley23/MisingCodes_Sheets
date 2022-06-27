//https://leetcode.com/problems/sort-colors/

class Solution {
public:
    void swap(vector<int>& nums, int x, int y){
        int temp = nums[x];
        nums[x] = nums[y];
        nums[y] = temp;
    }
    
    void sortColors(vector<int>& nums) {
        int i,j,k;
        i=0,j=0,k=nums.size()-1;
        while(j<=k){
            if(nums[j] == 0){
                swap(nums, i, j);
                i++; j++;
            }else if(nums[j] == 2){
                swap(nums, j, k);
                k--;
            }else{
                j++;
            }
        }
    }
};
