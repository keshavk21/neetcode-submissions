class Solution {
public:
    bool isPalindrome(string s) {
        int start=0;
        string st = "";
        for(char it: s){
            if(isalnum(it)){
                st.push_back(tolower(it));
            }
        }
        
        int last=st.length()-1;
        while(start<last){
            if(st[start]!=st[last]){
                return false;
            }
            start++;
            last--; 
        }
        return true;
    }
};
