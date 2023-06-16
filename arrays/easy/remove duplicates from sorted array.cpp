// Problem Statement: Given an integer array sorted in non-decreasing order, remove the duplicates in place such that each unique element appears only once. The relative order of the elements should be kept the same.
// If there are k elements after removing the duplicates, then the first k elements of the array should hold the final result. It does not matter what you leave beyond the first k elements.
// Note: Return k after placing the final result in the first k slots of the array.

#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &arr) {
  for (int val : arr) {
    cout << val << " ";
  }
  cout << endl;
}

int solution(vector<int> &arr, int size) {
  int j = 0;
  for (int i = 1; i < size; ++i) {
    if (arr[i] != arr[j]) {
      j++;
      swap(arr[i], arr[j]);
    }
  }

  print(arr);

  return j + 1;
}

int main() {
  int n;
  cin >> n;

  vector<int> arr;
  int x;
  for (int i = 0; i < n; ++i) {
    cin >> x;
    arr.push_back(x);
  }

  cout << solution(arr, arr.size());

  return 0;
}
