int searchInsert(int* nums, int numsSize, int target) {
  
  unsigned short int * i = malloc(2);

  for(*i = 0; *i < numsSize; *i = *i + 1) {

    if(nums[*i] == target) {

      return *i;
    }
    if(nums[*i] > target) {

      return *i;
    }
  }

  return numsSize;
}
