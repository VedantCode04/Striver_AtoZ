//leetcode 169
// TC: o(n) SC: o(1)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int el;

        for(int &val: nums){
            if(count == 0){
                el = val;
                count++;
            } else if(val == el){
                count++;
            } else {
                count--;
            }
        }

        return el;
    }
};
