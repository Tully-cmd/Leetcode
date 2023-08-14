int comparator(const void * a, const void * b) {
  
  return *(int*)b - *(int*)a;
}

int findKthLargest(int* nums, int numsSize, int k){
  
  qsort(nums,numsSize,sizeof(int),comparator);

  for(int i = 0; i < numsSize; i = i + 1) {

    if(i + 1 == k) {

      return nums[i];
    }
  }

  return -1;
}
