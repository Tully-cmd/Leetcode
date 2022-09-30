class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        
        int distinctQuads = 0;
        
        for(int i = 3; i < nums.size(); i+=1) {
            
            int dVal = nums[i];
            int compareVal = 0;
            
            for(int j = 0; j < i - 2; j+=1) {
                
                compareVal += nums[j];
                for(int q = j+1; q < i - 1; q+=1) {
                    
                    compareVal += nums[q];
                    for(int m = q+1; m < i; m+=1) {
                        
                        if((compareVal + nums[m]) == dVal) {
                            
                            //printIndexs(nums, i, j, q, m);
                            //printValues(nums, i, j, q, m);
                            distinctQuads += 1;
                        }
                        
                    }
                    compareVal -= nums[q];
                }
                compareVal -= nums[j];
            }
            
        }
        return distinctQuads;
    }
    
    void printIndexs(vector<int>& nums, int d, int a, int b, int c) {
        
        cout << "Indexs: (";
        cout << a;
        cout << ", ";
        cout << b;
        cout << ", ";
        cout << c;
        cout << ", ";
        cout << d;
        cout << ")\n";
        
    }
    
    void printValues(vector<int>& nums, int d, int a, int b, int c) {
        
        cout << "Values: ";
        cout << nums[a];
        cout << " + ";
        cout << nums[b];
        cout << " + ";
        cout << nums[c];
        cout << " = ";
        cout << nums[d];
        cout << "\n";
        
    }
};
