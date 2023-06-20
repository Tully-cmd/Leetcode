/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getAverages(int* nums, int numsSize, int k, int* returnSize){

  *returnSize = numsSize;
  int* retArr = malloc(numsSize*sizeof(int));
  long runningTotal = 0;
  int numEle = 0;
  bool loadedK = false;

  for(int i = 0; i < numsSize; i+=1) {

    if(i - k >= 0 && i + k < numsSize) { //check if valid window

      if(i - (k+1) >= 0) { 
        //subtract first num from prev window out of runningTotal
        runningTotal -= nums[i-(k+1)];
      }

      if(loadedK == false) {
        loadedK = true;
        //load runningTotal vals in window just once.
        //otherwise we are just add/sub the new/old vals
        for(int j = i - k; j <= i + k; j+=1) {
          runningTotal += nums[j];
        }

      } else {
        //add new val to runningTotal window
        runningTotal += nums[i+k];
      }

      retArr[i] = runningTotal / ((2*k) + 1);

    } else {

      retArr[i] = -1;
      
    }
    
  }

  return retArr;
}
