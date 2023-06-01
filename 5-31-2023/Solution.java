class UndergroundSystem {

  int[][] stationTimes;
  String[][] stationNames;
  ArrayList<Integer> validIDs;

  public UndergroundSystem() {

    this.stationTimes = new int[20000][2];
    this.stationNames = new String[20000][2];
    this.validIDs = new ArrayList<Integer>();
  }
    
  public void checkIn(int id, String stationName, int t) {

    if(validIDs.contains(id) == false) {

      validIDs.add(id);
      stationNames[validIDs.indexOf(id)][0] = stationName;
      stationTimes[validIDs.indexOf(id)][0] = t;
    }
  }
    
  public void checkOut(int id, String stationName, int t) {

    if(validIDs.contains(id)) {

      stationNames[validIDs.indexOf(id)][1] = stationName;
      stationTimes[validIDs.indexOf(id)][1] = t;
      validIDs.set(validIDs.indexOf(id),0);
    }
  }
    
  public double getAverageTime(String startStation, String endStation) {

    double runningAverage = 0.0;
    double totalDepartures = 0.0;
    
    for(int i = 0; i < validIDs.size(); i+=1) {

      if(stationNames[i][0] != null && stationNames[i][1] != null) {

        if(stationNames[i][0].equals(startStation) && stationNames[i][1].equals(endStation)) {

          runningAverage += (double) (stationTimes[i][1] - stationTimes[i][0]);
          totalDepartures = totalDepartures + 1.0;
        }
      }
    }
    return runningAverage/totalDepartures;
  }
}

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem obj = new UndergroundSystem();
 * obj.checkIn(id,stationName,t);
 * obj.checkOut(id,stationName,t);
 * double param_3 = obj.getAverageTime(startStation,endStation);
 */
