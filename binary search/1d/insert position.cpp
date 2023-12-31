//leetcode 35

class Solution {
public:
    int searchInsert(vector<int>& a, int target) {
        int low = 0, high = a.size() - 1;
        int index = 0;

        while(low <= high){
            int mid = low + (high - low)/2;
            if(a[mid] == target){
                index = mid;
                high = mid - 1;
            } else if (a[mid] < target){
                index = mid + 1;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return index;
    }
};
