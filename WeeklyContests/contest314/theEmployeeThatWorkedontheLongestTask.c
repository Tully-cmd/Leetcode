int hardestWorker(int n, int** logs, int logsSize, int* logsColSize){

    int longestTaskTime = 0;
    int smallestID = -1;
    
    for(int i = 0; i < logsSize; i += 1) {
        
        if(i == 0) {
            
            longestTaskTime = logs[i][1];
            smallestID = logs[i][0];

        } else {

            if( (logs[i][1] - logs[i - 1][1]) > longestTaskTime) {
                
                longestTaskTime = logs[i][1] - logs[i - 1][1];
                smallestID = logs[i][0];
                
            } else if( (logs[i][1] - logs[i - 1][1]) == longestTaskTime ) {
                
                longestTaskTime = logs[i][1] - logs[i - 1][1];
                
                if(logs[i][0] < smallestID) {
                    
                    smallestID = logs[i][0];
                }
            }
        }
    }
    
    return smallestID;
    
}
