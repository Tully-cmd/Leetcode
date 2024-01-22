bool isMonotonic(int* nums, int numsSize) {
  //increasing == 1 decreasing == -1
  //int dir = 0;

  if(nums[0] > nums[numsSize - 1]) {

    //dir = -1;
    for(int i = 0; i < numsSize - 1; i = i + 1) {

      if(nums[i] < nums[i + 1]) {

        return false;
      }
    }

  } else {

    //dir = 1;
    for(int i = 0; i < numsSize - 1; i = i + 1) {

      if(nums[i] > nums[i + 1]) {
        
        return false;
      }
    }
  }
  return true;
}
