bool search(int* nums, int numsSize, int target){
  for(int i = 0; i < numsSize; i = i + 1) {

    if(nums[i] == target) {

      return true;
    }
  }
  return false;
}
