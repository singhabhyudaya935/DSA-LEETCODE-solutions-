class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        int longest=0;
        for(auto num: st){
            if(st.find(num-1)==st.end()){
                int count=1;
                while(st.find(num + count)!= st.end()){
                    count++;
                }
                longest=max(longest,count);
            }
        } return longest;
    }
};