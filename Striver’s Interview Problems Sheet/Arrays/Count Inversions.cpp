//https://www.codingninjas.com/codestudio/problems/count-inversions_615

#include <bits/stdc++.h> 
long long merge(long long* arr, long long* temp, int left, int mid, int right){
    int i,j,k;
    long long inv_count = 0;
    
    i = left;
    j = mid;
    k = left;
    while((i <= mid-1) && (j <= right)){
        if(arr[i] <= arr[j]){
            temp[k++] = arr[i++];
        }else{
            temp[k++] = arr[j++];
            
            inv_count += mid-i;
        }
    }
    
    while(i <= mid - 1) temp[k++] = arr[i++];
    
    while(j <= right) temp[k++] = arr[j++];
    
    for(i = left; i <= right; ++i) arr[i] = temp[i];
    
    return inv_count;
}

long long _mergeSort(long long* arr, long long* temp, int l, int r){
    int mid;
    long long inv_count = 0;
    if(r > l){
        mid = (r + l)/2;
        
        inv_count += _mergeSort(arr, temp, l, mid);
        inv_count += _mergeSort(arr, temp, mid+1, r);
        
        inv_count += merge(arr, temp, l, mid+1, r);
    }
    return inv_count;
}

long long getInversions(long long *arr, int n){
    // Write your code here.
    long long temp[n];
    long long ans;
    ans = _mergeSort(arr, temp, 0, n-1);
    return ans;
}
