int cmpTor(const int * a, const int * b) {
    
    return ( *a - *b );
    
}

int minimumOperations(int* nums, int numsSize) {

    int minOps = 0;
    
    //debugArr(nums,numsSize);
    //printf("==================================\n");
    qsort(nums,numsSize,sizeof(nums[0]),cmpTor);
    //debugArr(nums,numsSize);
    
    for(int i = 0; i < numsSize; i+=1) {
        
        if(nums[i] > 0) {
            
            minOps += 1;
            int subVal = nums[i];
          
            for(int j = i; j < numsSize; j+=1) {
                
                nums[j] = nums[j] - subVal;
                
            }
            
        } 
        //printf("numOps: %d\n",minOps);
        //debugArr(nums,numsSize);
        //printf("==================================\n");
        
    }
    
    return minOps;
    
}

void debugArr(int* nums, int numsSize) {
    
    for(int i = 0; i < numsSize; i+=1) {
        
        printf("i , nums[i]: %d , %d\n",i,nums[i]);
        
    }
    
}
