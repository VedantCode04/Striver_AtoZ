//leetcode 31
// TC: o(3n), SC: o(1)

class Solution {
public:
    void nextPermutation(vector<int>& a) {
        int n = a.size();

        int index = -1;

        for(int i = n-2; i >= 0; i--){
            if(a[i+1] > a[i]){
                index = i;
                break;
            }
        }

        if(index == -1){
            reverse(a.begin(), a.end());
            return;
        }

        for(int i = n-1; i > index; i--){
            if(a[i] > a[index]){
                swap(a[i], a[index]);
                break;
            }
        }

        reverse(a.begin() + index + 1, a.end());
    }
};
