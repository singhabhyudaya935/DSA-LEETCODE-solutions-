class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size(); 
        sort(nums.begin(),nums.end());
        int current=1; int longest=1;
        if(nums.empty()) return 0;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]+1){
                current++;
            }
            else if(nums[i]==nums[i-1]){
                continue;
            }
            else{ current =1;}
            longest=max(longest,current);
        }
        return longest;
    }
};