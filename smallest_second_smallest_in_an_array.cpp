class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        // code here
       int smallest = INT_MAX;
        int s_smallest = INT_MAX;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] < smallest) {
                s_smallest = smallest;
                smallest = arr[i];
            }
            else if (arr[i] > smallest && arr[i] < s_smallest) {
                s_smallest = arr[i];
            }
        }

        if (s_smallest == INT_MAX)
            return {-1};

        return {smallest, s_smallest};
    }
};
