class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        vector<int> temp;
        vector<int> temp1;
         
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]!=0)
            temp1.push_back(arr[i]);
        }
        for(int i =0; i<arr.size();i++)
        {
            if(arr[i]==0) 
            temp.push_back(arr[i]);
        }
        temp1.insert(temp1.end(), temp.begin(), temp.end());
        
    arr=temp1;
       //bruteforce approach
        
    }
    
};
