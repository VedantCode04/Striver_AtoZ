//Problem Statement: Given an array of N integers, left rotate the array by one place.

#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &arr){
	for(int val: arr){
		cout << val << " ";
	}
}

void solution(vector<int> &arr, int size){
  int temp = arr[0];
  for (int i = 1; i < size; ++i) {
    swap(arr[i - 1], arr[i]);
	}

	arr[size-1] = temp; 

	print(arr);
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

    solution(arr, arr.size());

    return 0;
}
