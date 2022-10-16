int findMaxK(int* nums, int numsSize) { 

    int largestAbs = -1;
    
    for(int i = 0; i < numsSize; i+=1) {
        
        if( (fabs(nums[i]) >= largestAbs) && inverse(nums[i],nums,numsSize,i) == 1 ) {
            
            largestAbs = fabs(nums[i]);
            
        }
    }
    
    return largestAbs;
    
}

int inverse(int inv, int* nums, int numsSize, int j) {
    
    int found = 0;
    
    for(int i = 0; i < numsSize; i+=1) {
        
        if(j == i) {
            continue;
        }
        
//         printf("j:%d\n",j);
//         printf("i:%d\n",i);
//         printf("=========\n");
        
//         printf("nums[i]:%d\n",nums[i]);
//         printf("inv:%d\n",inv);
//         printf("============\n");
        
        if( (nums[i]) == (inv * -1)) {
            
            found = 1;
            
        }
    }
    
        
    return found;
}
