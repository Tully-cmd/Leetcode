/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
  
  int * retArr = malloc(8);
  *returnSize = 2;

  for(int i = 0; i < numbersSize - 1; i = i + 1) {

    for(int j = i + 1; j < numbersSize; j = j + 1) {

      if(numbers[i] + numbers[j] == target) {

        retArr[0] = i + 1;
        retArr[1] = j + 1;

        return retArr;
      }

      if(numbers[i] == numbers[j]) {

        break;
      }
    }
  }

  return retArr;

}
