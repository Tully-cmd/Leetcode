class Solution {

  public boolean checkStraightLine(int[][] coordinates) {

    double yTwoMinusYOne = (double) coordinates[1][1] - (double) coordinates[0][1];
    double xTwoMinusXOne = (double) coordinates[1][0] - (double) coordinates[0][0];
    double currentSlope = yTwoMinusYOne / xTwoMinusXOne;
    boolean strEight = true;

    for(int i = 1; i < coordinates.length -1; i+=1) {
      //System.out.println("[" + coordinates[i][0] + "," + coordinates[i][1] + "]");
      double yMinus = (double) coordinates[i+1][1] - (double) coordinates[i][1];
      double xMinus = (double) coordinates[i+1][0] - (double) coordinates[i][0];
    
        if(currentSlope == (yMinus / xMinus)) {
          strEight = true;
          continue;
        }
        if((currentSlope == Double.POSITIVE_INFINITY) && ((yMinus/xMinus) == Double.NEGATIVE_INFINITY)) {
          strEight = true;
          continue;
        }
        strEight = false;
        return strEight;
      }   
      return strEight;
    }
}
