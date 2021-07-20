class Solution {

    int[] bank;
    int[] current;
    
    public Solution(int[] nums) {
        this.current = nums;
        this.bank = nums.clone();
    }
    
    /** Resets the array to its original configuration and return it. */
    public int[] reset() {
        current = bank;
        bank = bank.clone();
        return current;
    }
    
    /** Returns a random shuffling of the array. */
    public int[] shuffle() {
        ArrayList<Integer> ret = new ArrayList<Integer>(bank.length);
        Random rand = new Random();
        for(int i = 0; i<bank.length; i++) {
            ret.add(bank[i]);
        }
        for(int i = 0; i<bank.length; i++) {
            current[i] = ret.remove(rand.nextInt(ret.size()));
        }
        return current;
    }
    
}

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(nums);
 * int[] param_1 = obj.reset();
 * int[] param_2 = obj.shuffle();
 */