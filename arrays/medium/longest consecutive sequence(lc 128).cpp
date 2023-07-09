//leetcode 128

class Solution {
public:
    int longestConsecutive(vector<int>& a) {
        int n = a.size();

        if(n == 0 || n == 1){
            return n;
        }

        unordered_set<int> st;

        for(int i = 0; i < n; i++){
            st.insert(a[i]);
        }

        int longest = 1;

        for(int el: st){
            int count = 0;
            if(st.find(el - 1) == st.end()){
                count++;
                int fi = el;

                while(st.find(fi + 1) != st.end()){
                    count++;
                    fi = fi + 1;
                }
            }

            longest = max(longest, count);
        }

        return longest;
    }
};
