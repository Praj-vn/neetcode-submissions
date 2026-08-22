class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>mp;
        int maxf=0;
        int l=0;
        int maxlen=0;
        for(int r=0;r<s.size();r++){
            mp[s[r]]++;      //update count of newly seen element
            maxf=max(maxf,mp[s[r]]);
            //frequency of less freq char > k
            while((r-l+1)-maxf>k){                  
                mp[s[l]]--;      //reduce count of left char
                l++;             //move to next element
            }
            maxlen=max(maxlen,r-l+1);       
        }
        return maxlen;
    }
};
