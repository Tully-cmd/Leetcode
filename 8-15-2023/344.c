void reverseString(char* s, int sSize){
  
  printf("sSize: %d\n",sSize);

  char leetcodeStyle[sSize];
  int lInd = sSize - 1;

  for(int i = 0; i < sSize; i = i + 1) {

    leetcodeStyle[i] = s[lInd];
    lInd -= 1;
  }

  for(int i = 0; i < sSize; i = i + 1) {

    s[i] = leetcodeStyle[i];
  }

}
