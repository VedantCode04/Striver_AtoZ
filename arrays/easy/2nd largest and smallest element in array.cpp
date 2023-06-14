#include <bits/stdc++.h>
using namespace std;

void secondSmall(vector<int> &arr, int size){
	int small = INT_MAX;
	int small_2nd = INT_MAX;

	for (int i = 0; i < size ; ++i)
	{
		if (arr[i] < small)
		{
			small_2nd = small; //we found new elemnt smaller than the current one, so the current one would be 2nd smallest and the new one would we smallest
			small = arr[i];
		} else if ( arr[i] < small_2nd && arr[i] != small) {
			small_2nd = arr[i]; // the current elemt is 2nd smallest as the element is smaller than the current 2nd small but it is not smallest.
		}
	}

	cout << "small = " << small << endl;
	cout << "second small = " << small_2nd << endl;
}

void secondLarge(vector<int> &arr, int size){
	int large = INT_MIN;
	int large_2nd = INT_MIN;

	for (int i = 0; i < size ; ++i)
	{
		if (arr[i] > large)
		{
			large_2nd = large; //we found new elemnt that is larger than the current largest , so the current largest is the 2nd largest and the new one is the largest
			large = arr[i];
		} else if ( arr[i] > large_2nd && arr[i] != large) {
			large_2nd = arr[i]; // the current elemt is 2nd largest as the element is larger than the current 2nd large but it is not large.
		}
	}

	cout << "large = " << large << endl;
	cout << "second large = " << large_2nd << endl;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr;
    int x;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        arr.emplace_back(x);
    }

    secondSmall(arr, arr.size());

    secondLarge(arr, arr.size());
}
