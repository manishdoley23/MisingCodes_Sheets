//https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/

#include<bits/stdc++.h>
using namespace std;

void swap(int* arr, int x, int y){
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}

void allNeg(int* arr, int n){
    int i,j;
    i=0,j=0;
    for(; j<n; ++j){
        if(arr[j] > 0) break;
    }
    while(i < n){
        if(arr[i] < 0 && i > j){
            swap(arr, i, j);
            for(;j<n;j++){
                if(arr[j] > 0) break;
            }
        }
        i++;
    }
}

void solve(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; ++i) cin >> arr[i];
    allNeg(arr, n);
    for(int i=0; i<n; ++i) cout << arr[i] << " ";
}

int main(){
    int T = 1;
    //cin >> T;
    while(T--){
      solve();
    }
}
