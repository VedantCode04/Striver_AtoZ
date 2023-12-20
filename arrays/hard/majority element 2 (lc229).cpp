//find majority element n/3 times

#define veci vector<int>
#define push(x) push_back(x)
class Solution {
public:
    vector<int> majorityElement(vector<int>& a) {
        veci sol;
        int  n = a.size();
	    int cnt1 = 0, cnt2 = 0;
	    int el1 = INT_MIN, el2 = INT_MIN;
	    for(int i = 0; i < n; i++){
		    if(el1 == a[i]) cnt1++;
		    else if(el2 == a[i]) cnt2++;
		    else if(cnt1 == 0){
			    el1 = a[i];
			    cnt1 = 1;
		    } else if(cnt2 == 0){
			    el2 = a[i];
			    cnt2 = 1;
		    } else {
			    cnt1--; cnt2--;
		    }
	    }
	    cnt1 = 0, cnt2 = 0;
	    for(auto val: a){
		    if(val == el1) cnt1++;
		    else if(val == el2) cnt2++;
	    }

	    if(cnt1 > n/3) sol.push(el1);
	    if(cnt2 > n/3) sol.push(el2);

        return sol;
    }
};
