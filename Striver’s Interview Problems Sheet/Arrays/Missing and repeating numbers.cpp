//https://www.codingninjas.com/codestudio/problems/873366?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
    int xor1 = arr[0];
    for(int i=1; i<n; ++i){
        xor1 ^= arr[i]; 
    }
    for(int i=1; i<=n; ++i){
        xor1 ^= i;
    }
    int set = xor1 & (~(xor1 - 1));
    int x = 0, y = 0;
    for(int i=0; i<n; ++i){
        if(set & arr[i]){
            x ^= arr[i];
        }else{
            y ^= arr[i];
        }
    }
    for(int i=1; i<=n; ++i){
        if(set & i){
            x ^= i;
        }else{
            y ^= i;
        }
    }
    for(int i=0; i<n; ++i){
        if(x == arr[i]){
            return {y, x};
        }
    }
    return {x, y};
}
