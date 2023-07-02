//leetcode 1299
// TC: O(n), SC: O(1)
class Solution {
public:
    vector<int> replaceElements(vector<int>& a) {
        int n = a.size();
        if(n < 2){
            return {-1};
        }

        int maxi = a[n-1];

        for(int i = n-2 ; i >= 0; i--){
            int temp = a[i];
            a[i] = maxi;
            if(maxi < temp){
                maxi = temp;
            }
        }

        a[n-1] = -1;

        return a;
    }
};
