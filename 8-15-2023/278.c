// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {

  if(n > 1073741823) {
  
    for(int i = n; i >= 1; i = i - 1) {

      if(isBadVersion(i) == false) {

        return i + 1;
      }
      if(isBadVersion(i - 10000) == true) {

        i = i - 9999;
      }
    }
  } else {

    for(int i = 1; i <= n; i = i + 1) {

      if(isBadVersion(i) == true) {

        return i;
      }
      if(isBadVersion(i + 10000) == false) {
        
        i = i + 9999;
      }
    }
  }
  
  return -1;
}
