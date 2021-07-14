class Solution {
    public String customSortString(String order, String str) {
        
        String s1 = "";
        
        for(int i = 0; i < order.length(); i++) {
            while(str.contains(order.subSequence(i,i+1))) {
                System.out.println(order.subSequence(i,i+1));
                s1 = s1.concat(order.substring(i,i+1));
                str = str.replaceFirst(order.substring(i,i+1),"");
            }
        }
        return s1.concat(str);
        
    }
}