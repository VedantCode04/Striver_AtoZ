//leetcode 268
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        int N = size;

        int xor1 = 0, xor2 = nums[0];

        for(int i = 1; i <= N; ++i){
            xor1 = xor1 ^ i;
        }

        for(int i = 1; i < N; ++i){
            xor2 = xor2 ^ nums[i];
        }

        return xor1 ^ xor2;

 //    int size = a.size();
	// int res = size;
	// for(int i = 0; i < size; i++){
	// 	res = res ^ i ^ a[i];
	//   }
    }
};
