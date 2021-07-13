class Solution {
    public boolean isIsomorphic(String s, String t) {
        HashMap<Character,Character> alphabet = new HashMap<Character,Character>(s.length());
        boolean bool = true;
        
        for(int i = 0; i < s.length(); i++) {
            System.out.println("i: " + i);
            if(alphabet.containsKey(s.charAt(i)) == false && alphabet.containsValue(t.charAt(i)) == false ) {
                alphabet.put(s.charAt(i), t.charAt(i));
            } else {
                if(alphabet.get(s.charAt(i)) == null) {
                    return false;
                }
                char check = alphabet.get(s.charAt(i));
                if(check == t.charAt(i)) {
                    System.out.println("good");
                } else {
                    return false;
                }
            }
        }
        return bool;
    }
}