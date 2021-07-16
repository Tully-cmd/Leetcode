class Solution {
    public int triangleNumber(int[] nums) {
        int res = 0;
        Arrays.sort(nums);
        System.out.println(nums);
        
        for(int i = 0; i < nums.length -2; i++) {
            for(int q = i+1; q < nums.length -1; q++) {
                for(int w = q+1; w < nums.length; w++) {
                    // System.out.print("i: " + nums[i]);
                    // System.out.print(" q: " + nums[q]);
                    // System.out.print(" w: " + nums[w]);
                    // System.out.println("");
                    if(nums[i]+nums[q] > nums[w]) {
                        res = res + 1;
                    }
                }
            }
        }
        return res;
    }
}