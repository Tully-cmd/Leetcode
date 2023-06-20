class Solution {
  public boolean isPalindrome(int x) {

    if(x < 0) {
      return false;
    }
    String val = new String(Integer.valueOf(x).toString());
    //System.out.println(val);
    
    int startInd = 0;
    int endInd = val.length() - 1;

    while(startInd <= endInd) {
      if(val.charAt(startInd) == val.charAt(endInd)) {
        startInd = startInd + 1;
        endInd = endInd - 1;
      } else {
        return false;
      }
    }
    return true;
  }
}
