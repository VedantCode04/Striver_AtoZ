//leetcode 189

class Solution {
    void rev(vector<int>& arr, int start, int end){
        while (start < end) {
            swap(arr[start], arr[end]);
            start++, end--;
        }
    }
public:
    void rotate(vector<int>& arr, int k) {
        int size = arr.size();
        k = (k % size);
        k = size - k;
        rev(arr, 0, k-1);
        rev(arr, k, size - 1);
        rev(arr, 0, size - 1);
    }
};
