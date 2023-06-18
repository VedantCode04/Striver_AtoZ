//leetcode 485

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, Max = 0;
        for(int i = 0; i < nums.size(); ++i){
            (nums[i] == 1) ? count++ : count = 0;
            Max = max(count, Max);
        }

        return Max;
    }
};
