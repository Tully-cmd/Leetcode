int smallestRangeI(int* nums, int numsSize, int k){
  
  // unsigned short int * minVal = malloc(2);
  // * minVal = 65535;
  // unsigned short int * maxVal = malloc(2);
  // * maxVal = 0;
  // unsigned short int * i = malloc(2);
  
  unsigned short int minVal = 65535;
  unsigned short int i = 0;
  unsigned short int maxVal = 0;

  for(; i < numsSize; i+=1) {
    
    if(nums[i] < minVal) {

      minVal = nums[i];
    }
    if(nums[i] > maxVal) {

      maxVal = nums[i];
    }
  }
  //printf("minVal: %d\n",minVal);
  //printf("maxVal; %d\n",maxVal);
  minVal = minVal + k;
  maxVal = maxVal - k;
  
  if(minVal < 0) {
    minVal = 0;
  }

  if(minVal > maxVal) {
    return 0;
  }

  //printf("minVal: %d\n",minVal);
  //printf("maxVal; %d\n",maxVal);
  return maxVal - minVal;
}
