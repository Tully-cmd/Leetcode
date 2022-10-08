

int minOperations(char ** logs, int logsSize){

    int minOperations = 0;
    
    for(int i = 0; i < logsSize; i += 1) {
        
        printf("logs[i]: %s\n",logs[i]);
        
        int strLen = strlen(logs[i]);
        
        for(int j = 0; j < strLen; j += 1) {
            
            if( (j != 0) && (logs[i][j] == '/') && (logs[i][j - 1] != '.') ) {
                
                minOperations += 1;
            }
            
            if( j + 1 > strlen(logs[i])) {
                
                break;
            }
            
            if(logs[i][j] == '.' && logs[i][j + 1] == '/') {
                
                
            }
            
            if( j + 2 > strlen(logs[i])) {
                
                break;
            }
            
            if(logs[i][j] == '.' && logs[i][j + 1] == '.' && logs[i][j + 2] == '/') {
                
                if(minOperations > 0) {
                    
                    minOperations -= 1;
                }
            }
        }
    }
    return minOperations;
}
