class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        vector<int> retNums (nums.size());
        
        for(int i = 0; i < retNums.size(); i+=1) {
            
            retNums[i] = 0;
            
            for(int j = 0; j < nums.size(); j+=1) {
                
                if( (j != i) && (nums[i] > nums[j]) ) {
                    retNums[i] += 1;
                }
            }
        }
        return retNums;
    }
};
