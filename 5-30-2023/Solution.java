class Solution {

  public int lengthOfLongestSubstring(String s) {

    int longestSub = 0;
    String currentChars = "";
    int currentLen = 0;

    for(int i = 0; i < s.length(); i+=1) {

      currentChars = "";
      currentLen = 0;

      for(int j = i; j < s.length(); j+=1) {

        if(currentChars.contains(s.substring(j,j+1))) {
          
          break;
        } else {

          currentChars = currentChars.concat(s.substring(j,j+1));
          currentLen = currentLen + 1;
        }
        
        if(currentLen > longestSub) {

          longestSub = currentLen;
        }
      }
    }
    return longestSub;
  }
}
