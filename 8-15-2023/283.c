void moveZeroes(int* nums, int numsSize){
  
  int * retArr = malloc(4*numsSize);
  int retInd = 0;

  for(int i = 0; i < numsSize; i = i + 1) {

    if(nums[i] != 0) {

      retArr[retInd] = nums[i];
      retInd = retInd + 1;
    }
  }
  
  for(int i = retInd; i < numsSize; i = i + 1) {

    retArr[i] = 0;
  }

  for(int i = 0; i < numsSize; i = i + 1) {

    nums[i] = retArr[i];
    //free(&retArr[i]);
  }
}
