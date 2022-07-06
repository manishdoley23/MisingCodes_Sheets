//https://practice.geeksforgeeks.org/problems/search-in-a-matrix17201720/1/#

class Solution{
public:	
	int matSearch (vector <vector <int>> &mat, int n, int m, int X)
	{
	    // your code here
	    int i=0, j=m-1;
	    while(i <= n-1 && j >= 0){
	        if(mat[i][j] == X){
	            return 1;
	        }else if(mat[i][j] < X){
	            i++;
	        }else{
	            j--;
	        }
	    }
	    return 0;
	}
};
