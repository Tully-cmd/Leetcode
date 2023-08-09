int repeatedNTimes(int* nums, int numsSize){
  //printf("numsSize: %d\n",numsSize);
  //printf("n: %d\n",numsSize/2);

  unsigned short int * foundNums = calloc(10001,2);
  unsigned short int * nList = calloc(101,2);
  unsigned short int nListIndex = 0;

  for(int i = 0; i < numsSize; i = i + 1) {

    foundNums[nums[i]] += 1;

    if(foundNums[nums[i]] == numsSize/2) {

      //printf("added %d to nList\n",nums[i]);
      nList[nListIndex] = nums[i];
      nListIndex = nListIndex + 1;
    }
    if(foundNums[nums[i]] == (numsSize/2)+1 ) {

      for(int j = 0; j < 1001; j = j + 1) {

        if(nList[j] == nums[i]) {
          //printf("removed %d to nList\n",nums[i]);
          nList[j] = -1;
        }

        if(nList[j] == 0) {
          //printf("j: %d break\n",j);
          break;
        }
      }
    } 
  }

  for(int i = 0; i < 101; i = i + 1) {

    if(nList[i] != -1 && i <= nListIndex) {
      return  nList[i];
    }
  }
  return -1;
}
