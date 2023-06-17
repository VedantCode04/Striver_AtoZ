//leetcode 283

class Solution {
 public:
  void moveZeroes(vector<int>& arr) {
      int size = arr.size();
      int j = 0;
      for(int i = 0; i < size; ++i){
          if(arr[i] != 0){
              swap(arr[i], arr[j]);
              j++;
          }
      }
  }
};
