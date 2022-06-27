//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& p) {
        int mn=0,mx=0;
        int ans = INT_MIN;
        for(int i=0; i<p.size(); ++i){
            if(p[i] > p[mx]){
                mx = i;
            }
            
            if(p[i] < p[mn]){
                mn = i;
                if(mn > mx) mx = mn;
            }
            ans = max(ans, p[mx] - p[mn]);
        }
        return ans;
    }
};
