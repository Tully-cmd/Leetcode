class Solution {
  public int findMinDifference(List<String> timePoints) {  
    ListIterator<String> iterOne = timePoints.listIterator();
    int minDifference = 24 * 60;

    while(iterOne.hasNext()) {
      String eleOne = iterOne.next();
      int iterTwoStart = iterOne.nextIndex();
      ListIterator<String> iterTwo = timePoints.listIterator(iterTwoStart);

      while(iterTwo.hasNext()) {
        String eleTwo = iterTwo.next();
        int eleOneMins = Integer.valueOf(eleOne.substring(0,2)) * 60;
        eleOneMins = eleOneMins + Integer.valueOf(eleOne.substring(3,5));

        int eleTwoMins = Integer.valueOf(eleTwo.substring(0,2)) * 60;
        eleTwoMins = eleTwoMins + Integer.valueOf(eleTwo.substring(3,5));

        //System.out.println(eleOne.substring(0,2) + " * 60 " + " + " + eleOne.substring(3,5));
        //System.out.println(eleOneMins + " " + eleTwoMins);

        int comboMax = Math.max(eleOneMins,eleTwoMins);
        int comboMin = Math.min(eleOneMins,eleTwoMins);

        int minCheck = comboMax - comboMin;
        int rollBackMinCheck = 1440 - comboMax + comboMin;

        int minBoth = Math.min(minCheck,rollBackMinCheck);

        if(minBoth < minDifference) {
          minDifference = minBoth;
          if(minDifference == 0) {
              return minDifference;
          }
        }
      }
    }

    return minDifference;
  }
}
