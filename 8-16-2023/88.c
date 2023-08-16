int comparator(const void * a, const void * b) {
  
  return *(int*)a - *(int*)b;
}

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){

  int nums2Ind = 0;

  for(int i = m; i < nums1Size; i = i + 1) {
    
    printf("nums2[nums2Ind]: %d\n",nums2[nums2Ind]);
    nums1[i] = nums2[nums2Ind];
    nums2Ind = nums2Ind + 1;
  }

  qsort(nums1,nums1Size,4,comparator);
}
