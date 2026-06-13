class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum = INT_MIN;
        for(int i =0; i<nums.size();i++)
        {
            int currsum=0;
            for(int j=i; j<nums.size();j++)
            {
                currsum =currsum+nums[j];
                maxsum = max(currsum,maxsum);
            }
        }
        return maxsum;
    }
};
