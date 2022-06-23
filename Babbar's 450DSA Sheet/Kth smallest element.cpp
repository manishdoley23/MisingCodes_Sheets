//https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1#

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        priority_queue<int, vector<int>, greater<int>> pq(arr+l, arr+r+1);
        // int n = pq.size(); 
        for(int i=0; i<k-1; ++i){
            // cout << pq.top() << " ";
            pq.pop();
        }
        return pq.top();
    }
};
