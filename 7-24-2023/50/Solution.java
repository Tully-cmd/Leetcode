class Solution {
  public double myPow(double x, int n) {

    double ret = x;
    long nLong = n;
    boolean signOfN = true; //true = Positive, false = Negative

    if(x == 0.0) {

      return 0.0;
    }

    if(nLong == 0) {

      return 1.0;
    }

    if(nLong < 0) {

      signOfN = false;
      nLong = nLong * -1;
    }

    while(nLong > 100000) {

      ret = ret * Math.pow(x,1000.0);
      nLong = nLong - 1000;
    }

    while(nLong != 1) {
    
      ret *= x;
      nLong = nLong - 1;
    }

    if(signOfN == false) {
    
      ret = 1 / ret;
    }
  
    return ret;
  }
}
