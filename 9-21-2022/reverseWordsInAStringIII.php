class Solution {

    /**
     * @param String $s
     * @return String
     */
    function reverseWords($s) {
        $words = explode(" ", $s);
        $reversed = array();
        $count = 0;
        
        foreach($words as $word) {
            $reversed[$count] = strrev($word);
            $count = $count + 1;
        }
        
        $reversedSentence = "";
        
        foreach($reversed as $word) {
            $reversedSentence = $reversedSentence.$word." ";
        }
        
        $reversedSentence = rtrim($reversedSentence," ");
        return $reversedSentence;
        
    }
}
