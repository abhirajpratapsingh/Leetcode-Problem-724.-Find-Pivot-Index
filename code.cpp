class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
        int leftsum=0;
        int totalsum=0;
        for(int i=0;i<nums.size();i++)
            totalsum+=nums[i];
        for(int i=0;i<nums.size();i++)
        {
            leftsum += nums[i];
            if(leftsum==totalsum)
                return i;
            totalsum -= nums[i];
        }  
        return -1;
    }
};
