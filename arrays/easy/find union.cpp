// Problem Statement: Given two sorted arrays, arr1, and arr2 of size n and m. Find the union of two sorted arrays.
// The union of two arrays can be defined as the common and distinct elements in the two arrays.NOTE: Elements in the union should be in ascending order.
//TC = o(m+n), SC = O(1)
#include <bits/stdc++.h>
using namespace std;

void solution(vector<int>& a, vector<int>& b)
{
    int size1 = a.size();
    int size2 = b.size();

    int i = 0, j = 0;
    vector<int> v;

    while (i < size1 && j < size2) {
        if (a[i] <= b[j]) {
            if (v.empty() || v.back() != a[i])
                v.push_back(a[i]);
            i++;
        } else {
            if (v.empty() || v.back() != b[j])
                v.push_back(b[j]);
            j++;
        }
    }

    while (i < size1) {
        if (v.back() != a[i]) {
            v.push_back(a[i]);
        }
        i++;
    }
    while (j < size2) {
        if (v.back() != b[j]) {
            v.push_back(b[j]);
        }
        j++;
    }

    for (int val : v) {
        cout << val << " ";
    }
}

int main()
{
    int n, m;
    cin >> n;
    cin >> m;
    vector<int> arr1;
    vector<int> arr2;
    int x;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        arr1.push_back(x);
    }
    for (int i = 0; i < m; ++i) {
        cin >> x;
        arr2.push_back(x);
    }

    solution(arr1, arr2);

    return 0;
}
