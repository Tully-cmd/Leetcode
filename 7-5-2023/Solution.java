class Solution {
  public int longestSubarray(int[] nums) {
    int longestLen = 0;
    int currentLen = 0;
    for(int i = 0; i < nums.length; i+=1) {
      //System.out.println(nums[i]);
      boolean zeroIncluded = false;

      if(nums[i] == 1) {
        currentLen = 1;
      } else {
        currentLen = 0;
        zeroIncluded = true;
      }
        
      for(int j = i+1; j < nums.length; j+=1) {
        if(nums[j] == 1) {
          currentLen = currentLen + 1;
          continue;
        }
        if(j + 1 < nums.length && !zeroIncluded) {
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

      if((nums.length - i) < longestLen) {
        return longestLen;
      }

    }      
    return longestLen;
  }
}
