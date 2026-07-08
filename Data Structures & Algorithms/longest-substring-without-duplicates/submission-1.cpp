class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int maxl=0;
        unordered_set<char>st;
        for(int r=0;r<s.size();r++){
            while(st.find(s[r])!=st.end()){
                st.erase(s[l]);
                l++;
            }
            st.insert(s[r]);
            maxl=max(maxl,r-l+1);
        }
        return maxl;
    }
};
