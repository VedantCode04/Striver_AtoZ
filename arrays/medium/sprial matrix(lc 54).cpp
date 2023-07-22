//leetcode 54
// TC = O(M*N)
//SC = O(1) (except solution vector)

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& a) {
        vector<int> sol;
        int n = a.size();
        int m = a[0].size();
        int top = 0, left = 0, right = m-1, bottom = n-1;
        while(top <= bottom && left <= right){
            for(int i = left; i <= right; i++) sol.push_back(a[top][i]);
            top++;

            for(int i = top; i <= bottom; i++)sol.push_back(a[i][right]);
            right--;

            if(top <= bottom){
                for(int i = right; i >= left; i--) sol.push_back(a[bottom][i]);
                bottom--;
            }

            if(left <= right){
                for(int i = bottom; i >= top; i--)sol.push_back(a[i][left]);
                left++;
            }
        }

        return sol;
    }
};
