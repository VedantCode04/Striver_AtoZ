//leetocde 15

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a)
    {
        int n = a.size();
        vector<vector<int>> ans;

        sort(a.begin(), a.end());

        for (int i = 0; i < n; i++) {
            if (i != 0 && a[i] == a[i - 1])
                continue;
            int j = i + 1;
            int k = n - 1;
            while (j < k) {
                int sum = a[i] + a[j] + a[k];
                if (0 > sum) {
                    j++;
                } else if (0 < sum) {
                    k--;
                } else {
                    vector<int> temp { a[i], a[j], a[k] };
                    ans.push_back(temp);
                    j++;
                    k--;
                    while (a[j] == a[j - 1] && j < k)
                        j++;
                    while (a[k + 1] == a[k] && j < k)
                        k--;
                }
            }
        }

        return ans;
    }
};
