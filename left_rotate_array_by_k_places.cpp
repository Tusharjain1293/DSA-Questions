class Solution {
	public:
	void rotateArr(vector<int>& arr, int d) {
		 d = d%arr.size();
		vector<int> temp;
		
		for (int i = 0; i<d; i++)
			{
			temp.push_back(arr[i]);
		}
		
		for (int i = d; i<arr.size(); i++)
		{
		    arr[i-d]=arr[i];
		}
		
		for(int i= arr.size()-d;i<arr.size();i++)
		{
		    arr[i]=temp[i-(arr.size()-d)];
		}
	}
		
		
};
