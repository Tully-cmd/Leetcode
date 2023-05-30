class ParkingSystem {
  int bigSpots = 0;
  int mediumSpots = 0;
  int smallSpots = 0;

    public ParkingSystem(int big, int medium, int small) {
      this.bigSpots = big;
      this.mediumSpots = medium;
      this.smallSpots = small;
    }
    
    public boolean addCar(int carType) {
      if(carType == 1 && bigSpots > 0) {
        bigSpots -= 1;
        return true;
      }else if(carType == 2 && mediumSpots > 0) {
        mediumSpots -= 1;
        return true;
      }else if(carType == 3 && smallSpots > 0) {
        smallSpots -= 1;
        return true;
      }
      return false;
    }
}

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem obj = new ParkingSystem(big, medium, small);
 * boolean param_1 = obj.addCar(carType);
 */
