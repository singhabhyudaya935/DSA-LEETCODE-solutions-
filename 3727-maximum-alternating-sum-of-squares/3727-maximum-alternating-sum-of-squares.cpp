class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        vector<long long> temp(n);
        for(int i = 0; i < n; i++) {
            temp[i] = 1LL * nums[i] * nums[i];
        }
        sort(temp.begin(), temp.end(), greater<long long>());
        long long result = 0;
        int j = 0;
        for(int i = 0; i < n; i++){
            if(i % 2 == 0){
                result += temp[j];
                j++;
            }
        }
        for(int i = 0; i < n; i++){
            if(i % 2 != 0){
                result -= temp[j];
                j++;
            }
        }
        return result;
    }
};