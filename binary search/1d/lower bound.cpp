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

void printVec(veci(int) a)
{
    for (auto val : a) {
        cout << val << " ";
    }
}

void sol(veci(int) a)
{	int n = a.size();
	int k;
	cin >> k;

	int l = 0, r = n-1, ind = -1;

	while(l <= r){
		int mid = (l + r)/2;

		if(a[mid]>=k){
			ind = mid;
			r = mid - 1;
		} else {
			l = mid + 1;
		}
	}
	cout << "lower index = " << ind << endl;
}

int main()
{
    int n;
    cin >> n;
    veci(int) v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sol(v);
}
