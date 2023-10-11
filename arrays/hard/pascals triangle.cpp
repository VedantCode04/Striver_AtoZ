//leetcode 118
//TC: o(n^2)
//SC: o(n)

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> solution;

        for(int i = 0; i < numRows; i++){
            vector<int> temp;

            for(int j = 0; j <= i; j++){
                if(i == 0 || j == 0 || j == i){
                    temp.push_back(1);
                } else {
                    int result = solution[i-1][j-1] + solution[i-1][j];
				    temp.push_back(result);
                }
            }

            solution.push_back(temp);
        }

        return solution;
    }
};
