class Solution {

    /**
     * @param String $s
     * @return Boolean
     */
    function areOccurrencesEqual($s) {
        
        $firstLetter = substr($s,0,1);
        $goodString = true;
        $sharedOccur = substr_count($s,$firstLetter);
        $allLetters = str_split($s);
        
        foreach($allLetters as $char) {
            
            $occurVal = substr_count($s,$char);
            
            if($occurVal != $sharedOccur) {
                
                $goodString = false;
            }
            
        }
        
        return $goodString;
        
    }
}
