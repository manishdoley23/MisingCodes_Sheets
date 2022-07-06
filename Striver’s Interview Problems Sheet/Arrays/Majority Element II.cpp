//https://leetcode.com/problems/majority-element-ii/

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int ele1=-1, ele2=-1, cnt1=0, cnt2=0;
        for(int i=0; i<nums.size(); ++i){
            if(nums[i] == ele1){
                cnt1++;
            }else if(nums[i] == ele2){
                cnt2++;
            }else if(cnt1 == 0){
                ele1 = nums[i];
                cnt1 = 1;
            }else if(cnt2 == 0){
                ele2 = nums[i];
                cnt2 = 1;
            }else{
                cnt1--;
                cnt2--;
            }
        }
        // cout << "first: " << cnt1 << " " << cnt2 << endl;
        int reqSize = nums.size()/3;
        cnt1 = 0, cnt2 = 0;
        for(int i=0; i<nums.size(); ++i){
            if(nums[i] == ele1) cnt1++;
            else if(nums[i] == ele2) cnt2++;
        }
        // cout << "second:" << cnt1 << " " << cnt2 << endl;
        vector<int> ans;
        if(cnt1 > reqSize) ans.push_back(ele1);
        if(cnt2 > reqSize) ans.push_back(ele2);
        return ans;
    }
};
