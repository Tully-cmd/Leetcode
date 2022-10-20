int cmpTor(const int * a, const int * b) {
    
    return ( *a - *b );
    
}

bool containsDuplicate(int* nums, int numsSize){
    
    qsort(nums,numsSize,sizeof(nums[0]),cmpTor);
    
    for(int i = 0; i < numsSize; i+=1) {
            
            if(nums[i] == nums[i - 1] && i != 0) {
                
                return 1;
            }
        
    }
    return 0;
}
