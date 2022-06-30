//https://leetcode.com/problems/intersection-of-two-arrays/

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, bool> umap;
        for(int i=0; i<nums1.size(); ++i){
            umap[nums1[i]] = 1;
        }
        vector<int> ans;
        for(int i=0; i<nums2.size(); ++i){
            if(umap[nums2[i]]){
                ans.push_back(nums2[i]);
                umap[nums2[i]] = 0;
            }
        }
        return ans;
    }
};
