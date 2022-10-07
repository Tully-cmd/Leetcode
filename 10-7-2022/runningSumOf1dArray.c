/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize){

    int* retArrPtr = (int*) malloc(numsSize * sizeof(int));
    *returnSize = numsSize;
    
    int runningTotal = 0;
    
    for(int i = 0; i < numsSize; i+=1) {
        
        runningTotal += nums[i];
        retArrPtr[i] = runningTotal;
    }
    
    return retArrPtr;
    
}
