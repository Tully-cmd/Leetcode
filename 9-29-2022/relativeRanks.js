/**
 * @param {number[]} score
 * @return {string[]}
 */
var findRelativeRanks = function(score) {
    
    let scoreRanks = score.slice();
    scoreRanks.sort((a,b)=>a-b).reverse();
    let returnArr = [score.length];
        
    for (let i = 0; i < score.length; i+=1) {
        
        let rankOf = scoreRanks.indexOf(score[i]);
        
        if ( rankOf == 0 ) {
            
            returnArr.splice(i,1,"Gold Medal");
            
        } else if ( rankOf == 1 ) {
            
            returnArr.splice(i,1,"Silver Medal");
            
        } else if ( rankOf == 2 ) {
            
            returnArr.splice(i,1,"Bronze Medal");
            
        } else {
            
            rankOf += 1; // compensate for zero indexed array
            returnArr.splice(i,1,rankOf.toString());
        }
    }
    return returnArr;
};
