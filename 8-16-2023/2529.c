int maximumCount(int* nums, int numsSize){
  
  int numPos = 0;
  int numNeg = 0;

  for(int i = 0; i < numsSize; i = i + 1) {

    if(nums[i] > 0) {

      numPos = numPos + 1;
    }
    if(nums[i] < 0) {

      numNeg = numNeg + 1;
    }
  }
  //printf("numNeg: %d\n",numNeg);
  //printf("numPos: %d\n",numPos);
  if(numNeg > numPos) {

    numPos = numNeg;
  }
  return numPos;

}
