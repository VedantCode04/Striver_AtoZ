//kadanes algo
//TC: O(N), SC: O(1)
// leaders in array problem (gfg)
class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        int max = a[n-1];
        vector<int> ans;
        ans.push_back(max);
        
        for(int i = n-2 ; i >= 0; i--){
            if(a[i] >= max){
                max = a[i];
                ans.push_back(max);
            }
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;
        
    }
};
