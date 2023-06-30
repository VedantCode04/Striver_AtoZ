//leetcode 53
//Tc: O(n), SC: o(1)
//kadane's algorithm

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0, maxSum = INT_MIN;
        for(auto &num: nums){
            sum += num;
            if(sum > maxSum) maxSum = sum;
            if(sum < 0) sum = 0;
        }

        return maxSum;
    }
};
