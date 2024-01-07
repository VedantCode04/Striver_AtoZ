//leetcode 33

class Solution {
public:
    int search(vector<int>& a, int target) {
        int low = 0, high = a.size()-1;

        while(low <= high){
            int mid = low + (high-low)/2;

            if(a[mid]==target){
                return mid;
            } else if (a[low] <= a[mid]){
                if(a[mid] >= target && target >= a[low]) high = mid - 1;
                else low = mid + 1;
            } else {
                if(a[mid+1] <= target && target <= a[high]) low = mid + 1; 
                else high = mid - 1;
            }
        }

        return -1;
    }
};
