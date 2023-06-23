//https://www.codingninjas.com/codestudio/problems/longest-subarray-with-sum-k_6682399
//two pointer (only if all are positives)
// o(n) time, o(1) space
int longestSubarrayWithSumK(vector<int> a, long long k) {
    int j = 0, maxLen = 0;
    long long sum = 0;

    for(int i = 0 ; i < a.size() ; i++){
        sum += a[i];
        
        while(sum > k){
            sum -= a[j];
            j++;
        }

        if(sum == k){
            maxLen = max(maxLen, i - j + 1);
        }
    }

    return maxLen;
}
