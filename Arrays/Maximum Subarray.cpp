//Kadane's Algorithm: Prefix Sum Concept 101
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr_sum = INT_MIN;
        int prefix_sum = 0;
        for(int i=0;i<nums.size();i++)
        {
            prefix_sum = max(nums[i], prefix_sum+nums[i]);
            curr_sum = max(curr_sum, prefix_sum);
        }
        return curr_sum;
        
    }
};