//https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1#

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        unordered_map<int, int> umap;
        for(int i=0; i<n; ++i){
            umap[a[i]]++;
        }
        for(int i=0; i<m; ++i){
            umap[b[i]]++;
        }
        return umap.size();
    }
};
