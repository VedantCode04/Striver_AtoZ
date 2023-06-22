//leetcode 560

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0, count = 0;
        unordered_map<int, int> prefixSum;
        prefixSum[0]++;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            count += prefixSum[sum - k];
            prefixSum[sum]++;
        }

        return count;
    }
};
