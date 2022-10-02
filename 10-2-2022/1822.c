

int arraySign(int* nums, int numsSize) {

    int product = 1;
    
    for (int i = 0; i < numsSize; i += 1) {
        
        int currentSign = signFunc(nums[i]);
        product *= currentSign;
    }
    
    return signFunc(product);
    
}

int signFunc(int x) {
    
    if(x > 0) {
        return 1;
    } else if(x < 0) {
        return -1;
    } else {
        return 0;
    }
    
}
