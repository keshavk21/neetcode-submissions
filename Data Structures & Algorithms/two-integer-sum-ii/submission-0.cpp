class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int s=0;
        int l= numbers.size()-1;
        while(s<l){
            if(numbers[s]+numbers[l] == target){
                ans.push_back(s+1);
                ans.push_back(l+1);
                return ans;
            }
            if(numbers[s]+numbers[l]>target){
                l--;
            }
            if(numbers[s]+numbers[l]<target){
                s++;
            }
        }
        return ans;
    }
};
