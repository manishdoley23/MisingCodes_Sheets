//https://leetcode.com/problems/majority-element/

//TC = O(nlogn), SC = O(n)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> umap;
        for(int i=0; i<nums.size(); ++i){
            umap[nums[i]]++;
        }
        int size = nums.size();
        int reqSize = size/2;
        for(auto i:umap){
            if(i.second > reqSize) return i.first;
        }
        return -1;
    }
};

//TC = O(n), SC = O(1)
class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int ele;
        int cnt = 0;
        for(int i=0; i<arr.size(); ++i){
            if(cnt == 0){
                ele = arr[i];
            }
            
            if(ele == arr[i]) cnt++;
            else cnt--;
        }
        return ele;
    }
};
