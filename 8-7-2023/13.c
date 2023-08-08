int romanToInt(char * s) {

  int * retInt = malloc(4);
  * retInt = 0;
   
  signed short int * i = malloc(2);

  for(*i = 0; *i < strlen(s); *i += 1) {

    switch(s[*i]) {
      case 'I':
        
        if(*i + 1 < strlen(s) && (s[*i+1] == 'V' || s[*i+1] == 'X')) {
          *retInt = *retInt - 1;
        } else {
          *retInt = *retInt + 1;  
        }

        break;
      case 'V':
        
        if(*i + 1 < strlen(s) && s[*i+1] == 'X') {
          *retInt = *retInt - 5;
        } else {
          *retInt = *retInt + 5;  
        }

        break;
      case 'X':
        
        if(*i + 1 < strlen(s) && (s[*i+1] == 'L' || s[*i+1] == 'C')) {
          *retInt = *retInt - 10;
        } else {
          *retInt = *retInt + 10;  
        }

        break;
      case 'L':
        
        if(*i + 1 < strlen(s) && s[*i+1] == 'C') {
          *retInt = *retInt - 50;
        } else {
          *retInt = *retInt + 50;  
        }

        break;
      case 'C':
        
        if(*i + 1 < strlen(s) && (s[*i+1] == 'D' || s[*i+1] == 'M')) {
          *retInt = *retInt - 100;
        } else {
          *retInt = *retInt + 100;  
        }

        break;
      case 'D':
        
        if(*i + 1 < strlen(s) && s[*i+1] == 'M') {
          *retInt = *retInt - 500;
        } else {
          *retInt = *retInt + 500;  
        }

        break;
      case 'M':
        *retInt += 1000;
        break;
    }

    //printf("\n*retInt: %d\n",*retInt);
    //printf("retInt: %p\n\n", retInt);

  }

  free(i);
  return *retInt;
}
