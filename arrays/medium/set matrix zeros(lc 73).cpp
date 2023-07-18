//leetcode 73
// TC = O(2 * m * n) SC = O(1)

class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {
        int n = a.size();
        int m = a[0].size();
        int set = a[0][0];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(a[i][j] == 0){
                    a[i][0] = 0;
                    if(j != 0) a[0][j] = 0;
                    else set = 0;
                }
            }
        }

        for(int i = n-1; i >= 0; i--){
            for(int j = m-1; j >= 0; j--){
                if(a[i][0] == 0) a[i][j] = 0;

	            if(a[0][j] == 0 && j != 0) a[i][j] = 0;
	            else if(j == 0 && set == 0) a[i][j] = 0;
            }
        }
    }
};
