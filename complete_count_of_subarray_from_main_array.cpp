class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {

    unordered_set<int> st(nums.begin(), nums.end());
    int totalDistinct = st.size();

    int ans = 0;

    for(int i=0;i<nums.size();i++)
    {
        unordered_set<int> temp;

        for(int j=i;j<nums.size();j++)
        {
            temp.insert(nums[j]);

            if(temp.size()==totalDistinct)
                ans++;
        }
    }

    return ans;
}
        
    
};
