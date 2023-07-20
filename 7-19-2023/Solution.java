class Solution {
  public int[] asteroidCollision(int[] asteroids) {

    int numLeft = asteroids.length;
    final int DELETED = 1666;
    for(int i = 0; i < asteroids.length; i+=1) {
      
      if(asteroids[i] != DELETED) {
        
        if(asteroids[i] > 0) {//moving right
          
          for(int j = i+1; j < asteroids.length; j+=1) {

            if(asteroids[j] != DELETED) {
              if(asteroids[i] > Math.abs(asteroids[j]) && asteroids[j] < 0) {
                asteroids[j] = DELETED;
                numLeft = numLeft - 1;
              } else if(asteroids[i] < Math.abs(asteroids[j]) && asteroids[j] < 0) {
                asteroids[i] = DELETED;
                numLeft = numLeft - 1;
                break;
              } else if(asteroids[i] == Math.abs(asteroids[j]) && asteroids[j] < 0) {
                asteroids[i] = DELETED;
                asteroids[j] = DELETED;
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

            if(asteroids[j] != DELETED) {
              if(Math.abs(asteroids[i]) > Math.abs(asteroids[j]) && asteroids[j] > 0) {
                asteroids[j] = DELETED;
                numLeft = numLeft - 1;
              } else if(Math.abs(asteroids[i]) < Math.abs(asteroids[j]) && asteroids[j] > 0) {
                asteroids[i] = DELETED;
                numLeft = numLeft - 1;
                break;
              } else if(Math.abs(asteroids[i]) == Math.abs(asteroids[j]) && asteroids[j] > 0) {
                asteroids[i] = DELETED;
                asteroids[j] = DELETED;
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
    int[] retArr = new int[numLeft];
    int curIndex = 0;

    for(int i = 0; i < asteroids.length; i+=1) {

      if(asteroids[i] != DELETED) {
        retArr[curIndex] = asteroids[i];
        curIndex = curIndex + 1;
      }

    }

    return retArr;
  }
}
