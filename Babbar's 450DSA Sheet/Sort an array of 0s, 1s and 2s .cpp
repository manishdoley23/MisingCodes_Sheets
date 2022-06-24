//https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1#

class Solution{
    void swap(int* arr, int x, int y){
        int temp = arr[x];
        arr[x] = arr[y];
        arr[y] = temp;
    }
    
    public:
    void sort012(int a[], int n){
        // code here
        int i=0,j=0,k=n-1;
        while(j <= k){
           if(a[j] == 0){
               swap(a, i, j);
               i++; j++;
           }else if(a[j] == 2){
               swap(a, j, k);
               k--;
           }else{
               j++;
           }
        }
    }  
};
