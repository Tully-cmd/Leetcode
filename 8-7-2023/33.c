int search(int* nums, int numsSize, int target){
   for(int i = 0; i < numsSize; i+=1) {
     if(nums[i] == target) {
       return i;
     }
   }
   return -1;
}
