/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* asteroidCollision(int* asteroids, int asteroidsSize, int* returnSize){

  int numLeft = asteroidsSize;
  
  for(int i = 0; i < asteroidsSize; i+=1) {
      
    if(asteroids[i] != NULL) {
        
      if(asteroids[i] > 0) {//moving right
          
        for(int j = i+1; j < asteroidsSize; j+=1) {

          if(asteroids[j] != NULL) {

            if(asteroids[i] > abs(asteroids[j]) && asteroids[j] < 0) {

              asteroids[j] = NULL;
              numLeft = numLeft - 1;
            } else if(asteroids[i] < abs(asteroids[j]) && asteroids[j] < 0) {

              asteroids[i] = NULL;
              numLeft = numLeft - 1;
              break;
            } else if(asteroids[i] == abs(asteroids[j]) && asteroids[j] < 0) {

              asteroids[i] = NULL;
              asteroids[j] = NULL;
              numLeft = numLeft - 2;
              break;
            } else {

              break;
            }
          }
        }
      }
      if(asteroids[i] < 0) { //moving left

        for(int j = i-1; j >= 0; j-=1) {

          if(asteroids[j] != NULL) {

            if(abs(asteroids[i]) > abs(asteroids[j]) && asteroids[j] > 0) {

              asteroids[j] = NULL;
              numLeft = numLeft - 1;
            } else if(abs(asteroids[i]) < abs(asteroids[j]) && asteroids[j] > 0) {

              asteroids[i] = NULL;
              numLeft = numLeft - 1;
              break;
            } else if(abs(asteroids[i]) == abs(asteroids[j]) && asteroids[j] > 0) {

              asteroids[i] = NULL;
              asteroids[j] = NULL;
              numLeft = numLeft - 2;
              break;
            } else {

              break;
            }
          }
        }
      }
    }
  }

  //make retArr
  int* retArr;
  *returnSize = numLeft;

  retArr = (int*) malloc(sizeof(int) * numLeft);
  int curIndex = 0;

  for(int i = 0; i < asteroidsSize; i+=1) {
    
    if(asteroids[i] != NULL) {

      //printf("asteroids[%d]: %d\n",i,asteroids[i]);
      //printf("curIndex: %d\n",curIndex);
      retArr[curIndex] = asteroids[i];
      //printf("retArr[%d]: %d\n",curIndex, retArr[curIndex]);
      curIndex = curIndex + 1;
    }
  }

  return retArr;
}
