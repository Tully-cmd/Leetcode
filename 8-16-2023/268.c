int missingNumber(int* nums, int numsSize){
  
  //printf("numsSize: %d\n",numsSize);

  int * foundNums = malloc(4*(numsSize + 1));

  for(int i = 0; i < numsSize + 1; i = i + 1) {

    foundNums[i] = -1;
  }

  for(int i = 0; i < numsSize; i = i + 1) {

    //printf("nums[%d]: %d\n",i,nums[i]);
    foundNums[nums[i]] = 1;  
  }

  for(int i = 0; i < numsSize + 1; i = i + 1) {

    if(foundNums[i] == -1) {
      
      free(foundNums);
      return i;
    }
  }
  
  free(foundNums);
  return -1;
}
