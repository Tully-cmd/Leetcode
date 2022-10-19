bool isSubsequence(char * s, char * t){

    int retVal = 0;
    
//     while(*t != '\0') {
        
//         printf("%c",*t);
//         t+=1;
//     }
    
//     for(int i = 0; i < strlen(t); i+=1) {
        
//         printf("%c",t[i]);
//     }
    
        
    for(int i = 0; i < strlen(t); i+=1) {
            
        if(*s == t[i]) {
                
            s += 1;                
        }
    }
    if(*s == '\0') {
            
        retVal = 1;
    }
        
    return retVal;
    
}
