import java.util.regex.Pattern;
import java.util.regex.Matcher;
class Solution {
    public int canBeTypedWords(String text, String brokenLetters) {
        text = text.toLowerCase();
        brokenLetters = brokenLetters.toLowerCase();
        String[] delim = text.split(" ");
        
        String pattern = ".*[";

        if(brokenLetters.length() == 0) {
            return delim.length;
        }
        pattern = pattern.concat(brokenLetters);
        pattern = pattern.concat("]+.*");
        
        System.out.println(pattern);
        
        Pattern p = Pattern.compile(pattern);
        int counter = 0;
        
        for(int i = 0; i < delim.length; i++) {
            Matcher m = p.matcher(delim[i]);
            boolean b = m.matches();
            System.out.println(delim[i]);
            System.out.println(b);
            if(b == false) {
                counter = counter + 1;
            }
        }
        return counter;
    }
}