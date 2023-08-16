int addDigits(int num){

  int ret = -1;
 
  if(num < 10) {

    return num;
  } else {

    int temp = 0;
    
    while(num >= 10) {
      //printf("num mod 10: %d\n",num % 10);
      temp += num % 10;
      num = num / 10;
    }
    //printf("temp mod 10: %d\n", temp%10);
    temp = temp + (num % 10);
    ret = addDigits(temp);
  }

  return ret;
}
