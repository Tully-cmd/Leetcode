int longestSubarray(int* nums, int numsSize){
    int longestLen = 0;
    int currentLen = 0;
    for(int i = 0; i < numsSize; i+=1) {
      bool zeroIncluded = false;

      if(nums[i] == 1) {
        currentLen = 1;
      } else {
        currentLen = 0;
        zeroIncluded = true;
      }
        
      for(int j = i+1; j < numsSize; j+=1) {
        if(nums[j] == 1) {
          currentLen = currentLen + 1;
          continue;
        }
        if(j + 1 < numsSize && !zeroIncluded) {
          zeroIncluded = true;
          continue;
        }
        break;
      }

      if(!zeroIncluded) {
        currentLen = currentLen - 1;
      }
      
      if(currentLen > longestLen) {
        longestLen = currentLen;
      }

      if((numsSize - i) < longestLen) {
        return longestLen;
      }

    }      
    return longestLen;
}
