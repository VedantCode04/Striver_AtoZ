// Check if an Array is Sorted

// Problem Statement: Given an array of 
// size n, write a program to check if the given array is sorted in 
// (ascending / Increasing / Non-decreasing) order or not.
// If the array is sorted then return True, Else return False.

#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int>& arr) {

  for (int i = 0; i < arr.size() - 1; ++i) {
    if (arr[i] <= arr[i+1]) continue;
    else return false;
  }


  return true;
}

int main() {
  int n;
  cin >> n;

  vector<int> arr;
  int x;
  for (int i = 0; i < n; ++i) {
    cin >> x;
    arr.emplace_back(x);
  }

  cout << isSorted(arr);
}
