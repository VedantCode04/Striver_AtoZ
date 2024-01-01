#include <bits/stdc++.h>
#include <typeinfo>
#define vec(x) vector<x>
#define veci vector<int>
#define vveci vector<vector<int>>
#define push(x) push_back(x)
#define set(x) set<x>
#define uset(x) unordered_set<x>
#define map(x, y) map<x, y>
#define umap(x, y) unordered_map<x, y>

using namespace std;

template <typename T>

void print(T& a)
{
    for (auto val : a) {
        cout << val << " ";
    }
}

void sol(veci& a, int n)
{
    int x;
    cin >> x;

    int start = -1, end = -1;

    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if(a[mid] >= x){
        	start = mid;
        	high = mid - 1;
        } else if (a[mid] < x){
        	low = mid + 1;
        }
    }

    low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if(a[mid] <= x){
        	end = mid;
        	low = mid + 1;
        } else {
        	high = mid - 1;
        }
    }

    cout << "total occurences = " << end - start + 1 << endl;
}

int main()
{
    int n;
    cin >> n;

    veci a;

    for (int j = 0; j < n; j++) {
        int x;
        cin >> x;
        a.push(x);
    }

    sol(a, n);
}
