double myPow(double x, int n){
  //printf("x: %d\nn: %d\n",x,n);
  double ret = x;
  long nLong = n;
  bool signOfN = true; //true = Positive, false = Negative

  if(!x) {
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
    ret = ret * pow(x,1000.0);
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
