class Solution {
public:
    void swap(vector<char>& s, int x, int y){
        char temp = s[x];
        s[x] = s[y];
        s[y] = temp;
    }
    
    void reverseString(vector<char>& s) {
        int i=0, j=s.size()-1;
        while(i < j){
            swap(s, i, j);
            i++; j--;
        }
    }
};
