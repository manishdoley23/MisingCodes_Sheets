//https://leetcode.com/problems/4sum/

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> vec;
        if(nums.empty()) return vec;
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for(int i = 0; i < n; ++i){

            for(int j = i + 1; j < n; ++j){
                long long target_2 = (long long)target - nums[i] - nums[j];

                int front = j+1;
                int back = n-1;

                while(front < back){
                    long long two_sum = nums[front] + nums[back];
                    if(two_sum < target_2){
                        front++;
                    }else if(two_sum > target_2){
                        back--;
                    }else{
                        vector<int> temp(4, 0);
                        temp[0] = nums[i];
                        temp[1] = nums[j];
                        temp[2] = nums[front];
                        temp[3] = nums[back];
                        vec.push_back(temp);
                        
                        while(front < back && nums[front] == temp[2]) front++;
                        while(front < back && nums[back] == temp[3]) back--;
                    }
                }
                while(j < n-1 && nums[j] == nums[j+1]) j++;
            }
            while(i < n-1 && nums[i] == nums[i+1]) i++;
        }
        return vec;
    }
};
