class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map<int,int> mp;
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])==mp.end()){
                mp.insert({s[i],1});
            }
            else{
                mp[s[i]]++;
            }
        }
        for(int i=0;i<s.size();i++){
            if(mp.find(t[i])==mp.end()){
                return false;
            }
            else{
                mp[t[i]]--;
                if(mp[t[i]]==0) mp.erase(t[i]);
                if(mp.empty()) return true;
            }
        }
        return false;
    }
};
