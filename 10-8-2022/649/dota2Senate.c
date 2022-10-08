

char * predictPartyVictory(char * senate){
    
    while(1) {
    
        for(int i = 0; i < strlen(senate); i+=1) {
                
            if(senate[i] == 'R') {
                
                char * nextVictim = strchr(&senate[i],'D');
                char * frontVictim = strchr(senate,'D');
                
                if(nextVictim == NULL && frontVictim == NULL) {
                    
                    return "Radiant";
                } else if (nextVictim == NULL) {
                    
                    *frontVictim = 'X';
                    //printf("current senate: %s\n",senate);
                    
                } else {
                    
                    *nextVictim = 'X';
                    //printf("current senate: %s\n",senate);
                }
            }
            if(senate[i] == 'D') {
                
                char * nextVictim = strchr(&senate[i],'R');
                char * frontVictim = strchr(senate,'R');
                
                if(nextVictim == NULL && frontVictim == NULL) {
                    
                    return "Dire";
                } else if (nextVictim == NULL) {
                    
                    *frontVictim = 'X';
                    //printf("current senate: %s\n",senate);
                    
                } else {
                    
                    *nextVictim = 'X';
                    //printf("current senate: %s\n",senate);
                }
            }
        }

    
    }

}
