class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0;
        int res=0;
        int curr=0;
        unordered_map<char,int>mp;
        for(int r=0;r<s.size();r++){
            mp[s[r]]++;
            curr=max(curr,mp[s[r]]);

            while((r-l+1)-curr>k){
                mp[s[l]]--;
                l++;
            }
            res=max(res,r-l+1);
        }
        return res;
    }
};
