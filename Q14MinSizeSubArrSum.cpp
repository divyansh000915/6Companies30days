class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size(), sum = 0, minL = n+1, start = 0, end=0;
        while(end < n){
            while(sum<target && end<n){
                sum += nums[end++];
            }
            
            while(sum >= target && start < n){
                if (end - start < minL){
                    minL = end-start;
                }
                 sum-=nums[start++];
            }
        }
        if (minL == n+1) return 0;
        return minL;
    }
};