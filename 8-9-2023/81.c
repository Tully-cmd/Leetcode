  bool search(int* nums, int numsSize, int target) {
    
    short int i;

    for(i = 0; i < numsSize; i = i + 1) {

      if(nums[i] == target) {

        return true;
      }
      if(nums[i] > target) {

        break;
      }
    }
    
    for(i = numsSize - 1; i >= 0; i = i - 1) {

      if(nums[i] == target) {

        return true;
      }
      if(nums[i] < target) {

        break;
      }
    }

    return false;
  }
