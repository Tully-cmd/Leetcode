int pivotIndex(int* nums, int numsSize) {

    for(int i = 0; i < numsSize; i+=1) {
        
        if( leftSum(nums,numsSize,i) == rightSum(nums,numsSize,i)) {
            return i;
        }
    }
    return -1;
}

int leftSum(int* nums, int numsSize, int index) {
    
    int sum = 0;
    
    if(index > 0 && index < numsSize) {
        
        for(int i = 0; i < index; i+=1) {
            
            sum += nums[i];
        }
    }
    
    return sum;
}

int rightSum(int* nums, int numsSize, int index) {
    
    int sum = 0;
    
    if(index < numsSize && index >= 0) {
        
        for(int i = index + 1; i < numsSize; i+=1) {
            
            sum += nums[i];
        }
    }
    
    return sum;
}
