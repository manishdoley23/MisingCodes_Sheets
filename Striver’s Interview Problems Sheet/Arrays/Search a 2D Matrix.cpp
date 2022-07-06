//https://leetcode.com/problems/search-a-2d-matrix/

class Solution {
public:
    bool binSearch(vector<int> vec, int l, int r, int t){
        while(l <= r){
            int mid = (l+r)/2;
            
            if(vec[mid] == t){
                return 1;
            }else if(vec[mid] > t){
                r = mid-1;
            }else{
                l = mid+1;
            }
        }
        return 0;
    }
    
    bool searchMatrix(vector<vector<int>>& m, int t) {
        int rowLastInd = m.size() - 1;
        int colLastInd = m[m.size()-1].size() - 1;
        for(int i=0; i<rowLastInd; ++i){
            if(t == m[i][0] || t == m[i+1][0]){
                return 1;
            }else if(t > m[i][0] && t < m[i+1][0]){
                int j = 1;
                return binSearch(m[i], j, m[i].size()-1, t);
            }
        }
        
        // cout << "rowLastInd:" << rowLastInd << endl;
        // cout << "colLastInd:" << colLastInd << endl;
        
        return binSearch(m[rowLastInd], 0, colLastInd, t);
    }
};


//O(log(n*m)) solution
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int t) {
        int rowSize = matrix.size();
        int colSize = matrix[0].size();
        int l = 0, r = rowSize*colSize - 1;
        while(l <= r){
            int mid = (l+r)/2;
            
            int row = mid/colSize;
            int col = mid%colSize;
            
            if(matrix[row][col] == t){
                return 1;
            }else if(matrix[row][col] > t){
                r = mid-1;
            }else{
                l = mid+1;
            }
        }
        return 0;
    }
};
