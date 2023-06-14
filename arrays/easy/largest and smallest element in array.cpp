#include <bits/stdc++.h>
using namespace std;

int largest(vector<int>& arr) {
  int large = arr[0];

  for (int i = 0; i < arr.size(); ++i) {
    if (arr[i] > large) {
      large = arr[i];
    }
  }

  return large;
}

int smallest(vector<int>& arr) {
  int small = arr[0];

  for (int i = 0; i < arr.size(); ++i) {
    if (arr[i] < small) {
      small = arr[i];
    }
  }
  return small;
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

  cout << largest(arr) << endl;
  cout << smallest(arr);
}
