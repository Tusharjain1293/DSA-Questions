class Solution {
	public:
	bool twoSum(vector<int>& arr, int target) {
		// code here
		for (int i = 0; i<arr.size(); i++)
			{
			for (int j = i + 1; j<arr.size(); j++)
				{
				if (arr[i]+arr[j] == target) {

					return true;
				}
			}
		}
		return false;
		
	}
};
