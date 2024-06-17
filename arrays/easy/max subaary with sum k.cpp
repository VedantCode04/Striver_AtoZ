//https://practice.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=longest-sub-array-with-sum-k

int lenOfLongSubarr(int a[], int n, int k)
{
    unordered_map<long long, int> preSum;
    int sum = 0, maxLen = 0;
    long long rem = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + a[i];

        if (sum == k) {
            maxLen = i + 1;
        }
        rem = sum - k;
        if (preSum.find(rem) != preSum.end()) {
            maxLen = max(maxLen, i - preSum[rem]);
        }

        if (preSum.find(sum) == preSum.end()) {
            preSum[sum] = i;
        }
    }

    return maxLen;
};
